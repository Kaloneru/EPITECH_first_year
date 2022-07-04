##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## BSQ
##

SRC    =	my_printf.c	\
		base_to_base.c	\
		my_putchar.c	\
		my_put_nbr.c	\
		my_putstr.c	\
		my_revstr.c	\
		my_revstr.c	\
		my_strlen.c	\
		hexadecimal.c	\
		my_put_nbr_un.c	\
		my_strcpy.c	\


REM	=	*.o	\
		*.gcno	\
		*.gcda	\
		*~	\

OBJ    =	$(SRC:.c=.o)

NAME   =	libmy.a

all:   $(NAME)

$(NAME):	$(OBJ)
		gcc -c $(SRC)
		ar rc $(NAME) $(OBJ)
		mkdir -p ../../include
		cp $(NAME) ../
		cp my.h ../../include
clean:
	rm -f $(REM)

fclean:	clean
	rm -f $(NAME)
	rm -f unit_tests

re:	fclean all

tests_run:
	gcc -Wall -Wextra -o unit_tests *.c tests/test_my_printf.c  --coverage -lcriterion

