##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## 104Intersection
##

SRC	=	main.c	\
		options.c	\

OBJ     =	$(SRC:.c=.o)

REM	=	*.o	\
		*~	\

NAME	=	104intersection

all:
	@gcc -Wall -Wextra -o $(NAME) $(SRC) -lm
	@make clean

clean:
	@$(shell rm -f $(REM))

fclean: clean
	@$(shell rm -f 104intersection)
	@$(shell rm -f *.gcda)
	@$(shell rm -f *.gcno)
	@$(shell rm -f unit_tests)

re: 	fclean all

tests_run:
	@gcc -o unit_tests tests/ $(SRC) -lcriterion --coverage
	@./unit_tests
