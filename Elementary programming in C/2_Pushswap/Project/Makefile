##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## push swap
##

SRC	=	main.c	\
		position_to_a.c	\
		position_to_b.c	\
		rotate_a.c	\
		radix_sort.c	\

REM	=	*.o	\
		*.gcno	\
		*.gcda	\
		*~	\

NAME	=	push_swap

all:	$(NAME)

$(NAME):
	cd lib/my && make
	gcc -Wall -Wextra -o $(NAME) $(SRC) -L lib/my -lmy -g3
	make clean

clean:
	rm -f $(REM)

fclean: clean
	rm -f $(NAME)

re:	fclean all
