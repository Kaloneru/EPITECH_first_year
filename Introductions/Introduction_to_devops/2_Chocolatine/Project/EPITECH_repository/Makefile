##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile stumper 10
##

SRC =	main.c	\

OBJ	=	$(SRC:.c=.o)

REM =	*.gcno  \
		*.gcda  \
		vgcore*	\

NAME	=	fazzbizz

CC 	= gcc

CFLAGS	= -Wall -Wextra -lncurses

CPPFLAGS = -I include

all:	$(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $(NAME) $(SRC)
	make clean

debug:
	$(CC) $(CFLAGS) $(CPPFLAGS) -g3 -o $(NAME) $(SRC)
	./$(NAME)
	make clean

clean:
	$(RM) $(REM)

fclean: clean
	$(RM) $(NAME)
	$(RM) unit_tests

re:     fclean all

tests_run:
	gcc -o unit_tests tests/tests.c -lcriterion --coverage
	./unit_tests

.PHONY: all debug clean fclean re tests_run
