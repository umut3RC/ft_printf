/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uercan <uercan@student.42kocaeli.com.t>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 15:00:38 by uercan            #+#    #+#             */
/*   Updated: 2022/03/22 18:16:44 by uercan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int	controller(va_list arg, char s)
{
	int		l;

	l = 0;
	if (s == 'c')
		l += ft_putchar(va_arg(arg, int));
	else if (s == 's')
		l += ft_put_s(va_arg(arg, char *));
	else if (s == 'p')
		l += ft_put_p(va_arg(arg, unsigned long));
	else if (s == 'd' || s == 'i')
		l += ft_put_d_i(va_arg(arg, int));
	else if (s == 'u')
		l += ft_put_u(va_arg(arg, unsigned int));
	else if (s == 'x' || s == 'X')
		l += ft_put_x(va_arg(arg, unsigned int), s);
	else if (s == '%')
		l += ft_putchar('%');
	else
		l += ft_putchar(s);
	return (l);
}

int	ft_printf(const char *s, ...)
{
	va_list	arg;
	int		i;
	int		j;

	i = 0;
	j = 0;
	va_start(arg, s);
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			i++;
			j += controller(arg, s[i]);
			i++;
		}
		else
		{
			j += ft_putchar(s[i]);
			i++;
		}
	}
	va_end(arg);
	return (j);
}
