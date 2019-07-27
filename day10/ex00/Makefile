# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jiwok <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/22 13:01:32 by jiwok             #+#    #+#              #
#    Updated: 2019/07/22 22:34:54 by jiwok            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = srcs/
HEADER = -I includes/
OBJ = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o

all: compile
	ar rc ${NAME} ${OBJ}

compile: 
	gcc -c ${SRC}ft_putchar.c ${SRC}ft_swap.c ${SRC}ft_putstr.c ${SRC}ft_strlen.c ${SRC}ft_strcmp.c ${HEADER} 

clean:
	/bin/rm -f ${OBJ}

fclean: clean
	/bin/rm -f ${NAME}

re: fclean all

