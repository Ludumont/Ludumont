# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ludumont <ludumont@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/08 16:23:22 by ludumont          #+#    #+#              #
#    Updated: 2022/02/08 16:26:57 by ludumont         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =libftprintf.a
SRC = ./*.c
OBJS = *.o
GCC = gcc
CFLAGS = -Wall -Werror -Wextra -I$(HEADER)
HEADER = ./

all: $(NAME)

clean:
	rm -f ${OBJS}

fclean:
	rm -f ${NAME}

re: fclean all