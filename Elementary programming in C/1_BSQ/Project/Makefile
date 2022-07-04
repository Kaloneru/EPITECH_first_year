##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## BSQ
##

SRC    = 	bsq.c	\
		bigest_square.c	\
		put_x.c	\
		str_to_arr_int.c	\
		my_putstr.c	\
		my_putchar.c	\
		my_strlen.c	\


OBJ	=	$(SRC:.c=.o)

REM    =	*.o	\
		*.gcno	\
		*.gcda	\

NAME   =	bsq

all:   $(NAME)

$(NAME): $(OBJ)
	@gcc -Wall -Wextra -g3 -o $(NAME) $(OBJ)
	@make clean

clean:
	$(shell rm -f $(REM))

fclean:	clean
	$(shell rm -f calc)
	$(shell rm -f unit_tests)

re:	fclean all

tests_run:
	gcc -o unit_tests --coverage -lcriterion -L lib/my/ -lmy && ./unit_tests
