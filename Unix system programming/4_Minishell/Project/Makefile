##
## EPITECH PROJECT, 2022
## Makefile
## File description:
##
##

SRC	=	main.c	\
		get_execve.c	\
		mem_alloc_2d_char_array.c	\
		del_spaces.c	\

OBJ	=	$(SRC:.c=.o)

REM	=	*.o     \
		*.gcno  \
		*.gcda  \

NAME	= mysh

CC	= gcc

CFLAGS	= -Wall -Wextra

CPPFLAGS = -Wall -Wextra -g3

all:	$(NAME)

$(NAME):
	cd lib/my && make
	$(CC) $(CFLAGS) -o $(NAME) $(SRC) -L lib/my -lmy
	make clean

debug:
	cd lib/my && make
	$(CC) $(CPPFLAGS) -o $(NAME) $(SRC) -L lib/my -lmy
	make clean

clean:
	rm -f $(REM)

fclean: clean
	rm -f $(NAME)
	rm -f unit_tests

re:	fclean all

.PHONY: debug clean fclean re
