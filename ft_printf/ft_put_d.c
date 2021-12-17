/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_d.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:09:24 by snakita           #+#    #+#             */
/*   Updated: 2021/11/02 18:09:25 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_d(int n, int *res)
{
	if (n == -2147483648)
		ft_put_s("-2147483648", res);
	else if (n < 0)
	{
		ft_put_c('-', res);
		ft_put_d(-n, res);
	}
	else if (n > 9)
	{
		ft_put_d(n / 10, res);
		ft_put_d(n % 10, res);
	}
	else
		ft_put_c(n + 48, res);
	return (*res);
}
