##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## ls
##

SRC    =	ls.c	\
		lsl.c	\
		main.c	\
		my_strcmp.c	\
		my_revstr.c	\
		my_strlen.c	\
		my_strcat.c	\

OBJ	=	$(SRC:.c=.o)

REM    =	*.o	\
		*.gcno	\
		*.gcda	\

NAME   =	my_ls

all:   $(NAME)

$(NAME): $(OBJ)
	@gcc -Wall -Wextra -g3 -o $(NAME) $(OBJ)
	@make clean

clean:
	rm -f $(REM)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
