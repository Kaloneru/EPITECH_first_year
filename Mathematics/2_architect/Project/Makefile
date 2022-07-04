##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## my_printf
##

SRC	=	architect.c	\
		str_to_int.c	\
		str_to_float.c	\

OBJ     =	$(SRC:.c=.o)

REM	=	*.o	\
		*~	\

NAME	=	102architect

all:
	@gcc -I include -Wall -Wextra -o $(NAME) $(SRC) -lm
	@make clean

clean:
	@$(shell rm -f $(REM))

fclean: clean
	@$(shell rm -f 102architect)
	@$(shell rm -f *.gcda)
	@$(shell rm -f *.gcno)
	@$(shell rm -f unit_tests)

re: 	fclean all

tests_run:
	@gcc -o unit_tests tests/ $(SRC) -lcriterion --coverage
	@./unit_tests
