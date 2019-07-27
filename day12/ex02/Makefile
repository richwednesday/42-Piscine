# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jiwok <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/25 14:00:51 by jiwok             #+#    #+#              #
#    Updated: 2019/07/25 22:34:59 by jiwok            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_tail
OBJ = ft_putstr.o ft_tail.o ft_display_lines.o ft_display_chars.o ft_print_errors.o ft_atoi.o
HEADER = funcs.h
FILES = ft_putstr.c ft_tail.c ft_display_lines.c ft_display_chars.c ft_print_errors.c ft_atoi.c

all: compile
	gcc -o ${NAME} ${OBJ}

compile:
	gcc -c -Wall -Wextra -Werror ${FILES} ${HEADER}

clean:
	/bin/rm -f ${OBJ} ${HEADER}.gch

fclean: clean
	/bin/rm -f ${NAME}
