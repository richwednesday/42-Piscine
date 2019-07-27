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
