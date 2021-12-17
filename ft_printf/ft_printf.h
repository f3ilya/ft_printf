/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snakita <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:08:57 by snakita           #+#    #+#             */
/*   Updated: 2021/11/02 18:08:58 by snakita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *s, ...);
int	ft_put_c(char c, int *res);
int	ft_put_s(char *s, int *res);
int	ft_put_d(int n, int *res);
int	ft_put_u(unsigned int n, int *res);
int	ft_put_x(unsigned long long int n, int *res, int j);
int	ft_put_p(unsigned long long int n, int *res);

#endif
