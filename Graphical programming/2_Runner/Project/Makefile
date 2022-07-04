##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## makefile screen
##

SRC	=	main.c	\
		perso.c	\
		menu.c	\
		obstacle.c	\
		parallax.c	\
		parallax02.c	\
		parallax03.c	\
		loose.c	\
		init_values.c	\
		jump.c	\
		jump02.c	\
		my_atoi.c	\
		walk.c	\
		walk02.c	\
		death.c	\
		death02.c	\
		fonctions.c	\
		music.c	\
		map.c	\
		score.c	\


REM	=	*.o	\
		*.gcno	\
		*.gcda	\
		*~	\

NAME 	= 	my_runner

all:   $(NAME)

$(NAME):
	cd lib/my && make
	gcc -g3  -Wall -Wextra -o $(NAME) $(SRC) -L lib/my -lmy -lcsfml-graphics -lcsfml-system -lcsfml-window -lcsfml-audio
	make clean

clean:
	rm -f $(REM)

fclean: clean
	rm -f $(NAME)
	rm -f unit_tests

re:	fclean all
