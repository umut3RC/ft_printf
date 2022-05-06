/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_d_i.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uercan <uercan@student.42kocaeli.com.t>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 18:03:27 by uercan            #+#    #+#             */
/*   Updated: 2022/03/22 17:27:26 by uercan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	ft_len(int i)
{
	int	l;

	l = 0;
	if (i == 0)
		return (1);
	if (i < 0)
		i *= -1;
	while (i)
	{
		i = i / 10;
		l++;
	}
	return (l);
}

int	ft_put_d_i(int i)
{
	int	l;

	l = ft_len(i);
	if (i == -2147483648)
	{
		l += ft_putchar('-');
		ft_putchar('2');
		i = 147483648;
	}
	if (i < 0)
	{
		i *= -1;
		l += ft_putchar('-');
	}
	if (i < 10)
	{
		ft_putchar(i + '0');
		return (l);
	}
	else
	{
		ft_put_d_i(i / 10);
	}
	ft_put_d_i(i % 10);
	return (l);
}
