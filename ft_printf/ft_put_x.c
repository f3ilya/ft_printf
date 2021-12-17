/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:10:08 by snakita           #+#    #+#             */
/*   Updated: 2021/11/02 18:10:09 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_x(unsigned long long int n, int *res, int j)
{
	if (n >= 16)
	{
		ft_put_x(n / 16, res, j);
		ft_put_x(n % 16, res, j);
	}
	else if (n > 9 && n < 16)
	{
		if (j == 1)
			ft_put_c(n % 10 + 97, res);
		else
			ft_put_c(n % 10 + 65, res);
	}
	else
		ft_put_c(n % 10 + 48, res);
	return (*res);
}
