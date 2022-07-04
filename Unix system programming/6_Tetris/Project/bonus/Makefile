##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## makefile
##

SRC =	main.c				\
		map_generator.c		\
		my_put_tab.c		\
		my_putstr.c			\
		my_strlen.c			\
		flags.c				\
		malloc_tab.c		\
		my_strcmp.c			\
		take_all_form.c		\
		my_str_to_word_array.c\
		open_end_read.c		\
		my_strcat.c			\
		my_str_isnum.c		\
		init.c				\
		display.c	 \
		verif.c	\
		line.c	\
		moov.c	\
		rotate.c	\
		map.c	\


OBJ	=	$(SRC:.c=.o)

REM =	*.gcno  \
		*.gcda  \

NAME	=	tetris

CFLAGS	+= -Wall -Wextra

all:	$(NAME)

$(NAME):
	$(CC) $(CFLAGS) -o $(NAME) $(SRC) -lncurses
	make clean

debug: CFLAGS += -g3
debug:
	$(CC) $(CFLAGS) -o $(NAME) $(SRC) -lncurses
	make clean

clean:
	$(RM) $(REM)

fclean: clean
	$(RM) $(NAME)
	$(RM) unit_tests

re:     fclean all

.PHONY: debug clean fclean re
