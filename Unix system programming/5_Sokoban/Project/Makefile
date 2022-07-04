##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile sokoban
##

SRC =	src/main.c	\
		src/lib/open_and_read.c	\
		src/lib/my_strlen.c	\
		src/sokoban.c	\
		src/get/get_buffer.c	\
		src/lib/mem_alloc_2d_char_array.c	\
		src/lib/str_to_word_arrray.c	\
		src/get/get_pos.c	\
		src/get/get_point.c	\
		src/moov_car.c	\
		src/check/check_win.c	\
		src/colors.c	\
		src/check/check_size.c	\
		src/set_structures.c	\
		src/moov.c	\
		src/check/check_walls.c	\
		src/lib/my_strcmp.c	\
		src/check/check_line.c	\
		src/lib/my_putchar.c	\
		src/lib/my_putstr.c	\
		src/check/check_perso.c	\
		src/end.c	\
		src/check/check_elem.c	\

OBJ	=	$(SRC:.c=.o)

REM =	*.gcno  \
		*.gcda  \
		vgcore*	\

NAME	=	my_sokoban

CC 	= gcc

CFLAGS	= -Wall -Wextra -lncurses

CPPFLAGS = -I include

all:	$(NAME)

$(NAME):
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $(NAME) $(SRC)
	make clean

debug:
	$(CC) $(CFLAGS) $(CPPFLAGS) -g3 -o $(NAME) $(SRC)
	make clean

clean:
	$(RM) $(REM)

fclean: clean
	$(RM) $(NAME)
	$(RM) unit_tests

re:     fclean all

##penser a mettre les fichier a compiler pour les tests
tests_run:
	@gcc -o unit_tests  -lcriterion --coverage
	./unit_tests

.PHONY: all debug clean fclean re tests_run
