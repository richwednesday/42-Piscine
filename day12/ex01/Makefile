# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jiwok <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/25 14:00:51 by jiwok             #+#    #+#              #
#    Updated: 2019/07/25 15:36:17 by jiwok            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_cat
OBJ = ft_putstr.o ft_cat.o
HEADER = funcs.h

all: compile
	gcc -o ${NAME} ${OBJ}

compile:
	gcc -c -Wall -Wextra -Werror ft_putstr.c ft_cat.c funcs.h

clean:
	/bin/rm -f ${OBJ} ${HEADER}.gch

fclean: clean
	/bin/rm -f ${NAME}
