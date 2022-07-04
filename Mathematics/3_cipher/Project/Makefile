##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Cipher
##

SRC	=	main.c	\
		message.c	\
		key.c	\

REM	=	*.o	\
		*.gcno	\
		*.gcda	\
		*~	\

NAME	=	103cipher

all:
	@gcc -I include/ -Wall -Wextra -o $(NAME) $(SRC) -lm
	@make clean

clean:
	@$(shell rm -f $(REM))

fclean: clean
	@$(shell rm -f 103cipher)
	@$(shell rm -f unit_tests)

re:	fclean all

tests_run:
	@gcc -o unit_tests $(SRC) -lcriterion --coverage
	./unit_tests
