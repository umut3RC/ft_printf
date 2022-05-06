/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uercan <uercan@student.42kocaeli.com.t>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 11:56:54 by uercan            #+#    #+#             */
/*   Updated: 2022/03/22 09:03:01 by uercan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len(unsigned int i)
{
	int	l;

	l = 0;
	while (i)
	{
		i = i / 16;
		l++;
	}
	return (l);
}

static void	ft_x_control(unsigned int x, int j)
{
	if (j == 'X')
		ft_putchar((x - 10) + 'A');
	else
		ft_putchar((x - 10) + 'a');
}

int	ft_put_x(unsigned int x, int j)
{
	int	l;

	l = ft_len(x);
	if (x == 0)
	{
		write(1, "0", 1);
		return (1);
	}
	else
	{
		if (x >= 16)
		{
			ft_put_x((x / 16), j);
			ft_put_x((x % 16), j);
		}
		else
		{
			if (x <= 9)
				ft_putchar(x + '0');
			else
				ft_x_control(x, j);
		}
	}
	return (l);
}
