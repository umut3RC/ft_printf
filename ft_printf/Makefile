# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: uercan <uercan@student.42kocaeli.com.t>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/23 10:00:36 by uercan            #+#    #+#              #
#    Updated: 2022/03/23 10:20:40 by uercan           ###   ########.tr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

CCFLAG = -Wall -Wextra -Werror

src = ft_put_d_i.c ft_put_p.c ft_put_s.c ft_putchar.c ft_put_u.c ft_itoa_u.c ft_put_x.c ft_printf.c

OBJS = $(src:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar -rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY:all clean fclean re
