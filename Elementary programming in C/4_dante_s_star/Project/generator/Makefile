##
## EPITECH PROJECT, 2022
## sokoban
## File description:
## Makefile
##

SRC	=	generator.c	\
		main.c		\
		imperfect.c	\
		add_walls.c	\
		malloc_maze.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra

CPPFLAGS	=	-I./include

NAME	=	generator

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all clean

.PHONY:	fclean all clean re
