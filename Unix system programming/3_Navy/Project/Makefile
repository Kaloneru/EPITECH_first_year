##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Navy
##

SRC	=	main.c	\
		map.c	\
		my_strlen.c	\
		help.c	\
		my_atoi.c	\
		setup.c	\
		display.c	\
		coord.c	\
		signals.c	\
		first_player.c	\
		second_player.c	\
		my_printf/my_printf.c   \
                my_printf/my_putchar.c  \
                my_printf/my_putstr.c   \
                my_printf/my_put_nbr.c  \
                my_printf/hexal_converter.c     \
                my_printf/my_revstr.c   \
                my_printf/str_to_int.c  \
                my_printf/my_strcpy.c   \
		my_printf/octal_converter.c     \
                my_printf/hexal_big.c   \
		my_printf/scase.c               \
                my_printf/octal_string.c        \
                my_printf/binary_converter.c    \
		my_printf/my_putlongnbr.c       \

REM	=	*.o	\
		*.gcno	\
		*.gcda	\
		*~	\

NAME	=	navy

all:
	@gcc -I include/ -Wall -Wextra -o $(NAME) $(SRC)
	@make clean

clean:
	@$(shell rm -f $(REM))

fclean: clean
	@$(shell rm -f navy)
	@$(shell rm -f unit_tests)

re:	fclean all

tests_run:
	@gcc -o unit_tests $(SRC) -lcriterion --coverage
	./unit_tests
