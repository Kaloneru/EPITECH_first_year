##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## makefile screen
##

SRC	=	fonction_used.c	\
		fonction_used2.c	\
		fonction_used3.c	\
		main.c	\
		my_strcmp.c	\

REM	=	*.o	\
		*.gcno	\
		*.gcda	\
		*~	\

NAME 	= 	screensaver

all:   $(NAME)

$(NAME):
	gcc -g3 -Wall -Wextra -o $(NAME) $(SRC) -L lib/my -lmy -lcsfml-graphics
	make clean

clean:
	rm -f $(REM)

fclean: clean
	rm -f $(NAME)
	rm -f unit_tests

re:	fclean all
