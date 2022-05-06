/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uercan <uercan@student.42kocaeli.com.t>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 12:34:16 by uercan            #+#    #+#             */
/*   Updated: 2022/03/24 19:38:43 by uercan           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

char		*ft_itoa_u(unsigned int i);
int			ft_printf(const char *s, ...);
int			ft_putchar(int c);
int			ft_put_s(char *c);
int			ft_put_u(unsigned int i);
int			ft_put_d_i(int i);
int			ft_put_p(unsigned long long i);
int			ft_put_x(unsigned int x, int j);

#endif
