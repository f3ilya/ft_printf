/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:08:45 by snakita           #+#    #+#             */
/*   Updated: 2021/11/02 18:08:47 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	pig(const char *s, va_list ap, int *res)
{
	if (*s == 'c')
		ft_put_c(va_arg(ap, int), res);
	else if (*s == 's')
		ft_put_s(va_arg(ap, char *), res);
	else if (*s == 'd' || *s == 'i')
		ft_put_d(va_arg(ap, int), res);
	else if (*s == 'u')
		ft_put_u(va_arg(ap, unsigned int), res);
	else if (*s == 'x')
		ft_put_x((unsigned int)va_arg(ap, unsigned long long int), res, 1);
	else if (*s == 'X')
		ft_put_x((unsigned int)va_arg(ap, unsigned long long int), res, 2);
	else if (*s == 'p')
		ft_put_p(va_arg(ap, unsigned long long int), res);
	else if (*s == '%')
		ft_put_c('%', res);
	return (*res);
}

int	ft_printf(const char *s, ...)
{
	va_list	ap;
	int		res;

	res = 0;
	va_start(ap, s);
	while (*s)
	{
		if (*s == '%')
			res = pig(++s, ap, &res);
		else
			ft_put_c(*s, &res);
		s++;
	}
	va_end(ap);
	return (res);
}
