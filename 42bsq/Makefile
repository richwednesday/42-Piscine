# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kaokeefe <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/07/28 13:34:36 by kaokeefe          #+#    #+#              #
#    Updated: 2019/07/31 14:23:51 by jiwok            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
SRC = src/main.c src/fill.c src/ft_atoi.c src/ft_read_input.c
HEADER = -I includes/
OBJ = main.o ft_atoi.o fill.o ft_read_input.o

all: compile
	@gcc -o $(NAME) $(OBJ)

compile:
	@gcc -c -Wall -Werror -Wextra $(SRC) $(HEADER)

clean:
	@rm -f $(OBJ) filefromstdin.txt

fclean: clean
	@rm -f $(NAME)

re: fclean all
