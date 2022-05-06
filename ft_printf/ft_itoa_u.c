/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_u.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uercan <uercan@student.42kocaeli.com.t>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 18:44:52 by uercan            #+#    #+#             */
/*   Updated: 2022/03/26 11:34:51 by uercan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_len(unsigned int i)
{
	unsigned int	l;

	l = 0;
	while (i)
	{
		i = i / 10;
		l++;
	}
	return (l);
}

char	*ft_itoa_u(unsigned int i)
{
	char			*s;
	unsigned int	l;

	l = ft_len(i);
	s = (char *)malloc((sizeof(char) * l));
	if (!s)
		return (0);
	s[l] = '\0';
	l -= 1;
	while (i)
	{	
		s[l] = (i % 10) + '0';
		i = i / 10;
		l--;
	}
	return (s);
}
