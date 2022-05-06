/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uercan <uercan@student.42kocaeli.com.t>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 17:20:33 by uercan            #+#    #+#             */
/*   Updated: 2022/03/24 19:38:04 by uercan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_len(unsigned long long c)
{
	int	l;

	l = 0;
	while (c != 0)
	{
		c = c / 16;
		l++;
	}
	return (l);
}

static void	ft_hexadecimal(unsigned long long c)
{
	if (c >= 16)
	{
		ft_hexadecimal(c / 16);
		ft_hexadecimal(c % 16);
	}
	else
	{
		if (c <= 9)
			ft_putchar(c + '0');
		else
			ft_putchar((c - 10) + 'a');
	}
}

int	ft_put_p(unsigned long long c)
{
	int	l;

	l = 0;
	write(1, "0x", 2);
	l += 2;
	if (c == 0)
	{
		write(1, "0", 1);
		return (l + 1);
	}
	else
		ft_hexadecimal(c);
	return (l += ft_len(c));
}
