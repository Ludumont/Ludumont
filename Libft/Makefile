# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ludumont <ludumont@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/03 12:01:33 by ludumont          #+#    #+#              #
#    Updated: 2022/01/04 14:03:37 by ludumont         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =libft.a
SRC = ./*.c
OBJS =*.o
GCC = gcc
CFLAGS=-Wall -Wextra -Werror -I$(HEADER)
HEADER = ./

all: $(NAME)

$(OBJS): $(SRC)
	$(GCC) $(CFLAGS) -c $(SRC)



${NAME}: ${OBJS}
	ar rc ${NAME} ${OBJS}
	ranlib ${NAME}

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re