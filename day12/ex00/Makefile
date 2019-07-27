# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jiwok <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/25 14:00:51 by jiwok             #+#    #+#              #
#    Updated: 2019/07/25 14:52:14 by jiwok            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
OBJ = ft_putstr.o display_file.o
HEADER = funcs.h

all: compile
	gcc -o ${NAME} ${OBJ}

compile:
	gcc -c -Wall -Wextra -Werror ft_putstr.c display_file.c funcs.h

clean:
	/bin/rm -f ${OBJ} ${HEADER}.gch

fclean: clean
	/bin/rm -f ${NAME}
