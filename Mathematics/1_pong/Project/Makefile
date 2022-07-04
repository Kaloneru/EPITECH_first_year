##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Pong
##

SRC	=	pong.c	\
		str_to_float.c	\
		str_to_int.c	\
		main.c	\

REM	=	*.o	\
		*.gcno	\
		*.gcda	\
		*~	\

NAME	=	101pong

all:	$(NAME)

$(NAME):
	gcc -Wall -Wextra -o $(NAME) $(SRC) -lm
	make clean

clean:
	$(shell rm -f $(REM))

fclean: clean
	$(shell rm -f 101pong)
	$(shell rm -f unit_tests)

re:	fclean all

tests_run:
	gcc -o unit_tests tests/tests_101pong.c $(SRC) -lcriterion --coverage
	./unit_tests
