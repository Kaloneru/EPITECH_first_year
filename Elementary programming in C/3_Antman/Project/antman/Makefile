##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Antman
##

SRC 	=	antman.c	\
		options.c	\
		lyrics.c	\
		images.c	\
		strcat.c	\
		my_itoa.c	\
		my_printf/my_printf.c	\
		my_printf/my_putchar.c	\
		my_printf/my_putstr.c	\
		my_printf/my_put_nbr.c	\
		my_printf/hexal_converter.c	\
		my_printf/my_revstr.c	\
		my_printf/str_to_int.c	\
		my_printf/my_strcpy.c	\
		my_printf/octal_converter.c	\
		my_printf/hexal_big.c	\
		my_printf/scase.c	\
		my_printf/octal_string.c	\
		my_printf/binary_converter.c	\
		my_printf/my_putlongnbr.c	\

REM 	=	*.o	\
		*.gcno	\
		*.gcda	\
		*~	\

NAME	= 	antman

INCLUDES =	-I ../include/

CFLAGS	= 	-Wall -Wextra

CPPFLAGS = 	-Wall -Wextra -g3

all:
	@gcc $(INCLUDES) $(CFLAGS) -o $(NAME) $(SRC)
	@make clean

debug:
	@$(CC) $(CPPFLAGS) -o $(NAME) $(SRC)
	make clean

clean:
	@rm -f $(REM)

fclean: clean
	@rm -f $(NAME)
	@rm -f unit_tests

re:	fclean all

.PHONY: debug clean fclean re
