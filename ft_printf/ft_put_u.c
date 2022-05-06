/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_u.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uercan <uercan@student.42kocaeli.com.t>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 18:41:19 by uercan            #+#    #+#             */
/*   Updated: 2022/03/21 22:03:35 by uercan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_u(unsigned int i)
{
	int		l;
	char	*n;

	l = 0;
	if (i == 0)
	{
		ft_putchar('0');
		return (1);
	}
	n = ft_itoa_u(i);
	l += ft_put_s(n);
	free(n);
	return (l);
}
