/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_s.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uercan <uercan@student.42kocaeli.com.t>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 17:16:02 by uercan            #+#    #+#             */
/*   Updated: 2022/03/08 11:20:26 by uercan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_put_s(char *c)
{
	int	i;

	i = 0;
	if (c == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (c[i] != '\0')
	{
		write(1, &c[i], 1);
		i++;
	}
	return (i);
}