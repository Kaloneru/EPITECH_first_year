##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile sokoban
##

SRC =	main.c	\

OBJ	=	$(SRC:.c=.o)

REM =	*.gcno  \
		*.gcda  \
		vgcore*	\

NAME	=	solver

CC 	= gcc

CFLAGS	= -Wall -Wextra -lncurses

CPPFLAGS = -I include

all:	$(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $(NAME) $(SRC)
	make clean

debug:
	$(CC) $(CFLAGS) $(CPPFLAGS) -g3 -o $(NAME) $(SRC)
	make clean

clean:
	$(RM) $(REM)

fclean: clean
	$(RM) $(NAME)
	$(RM) unit_tests

re:     fclean all

.PHONY: all debug clean fclean re
