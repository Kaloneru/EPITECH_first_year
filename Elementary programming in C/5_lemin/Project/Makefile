##
## EPITECH PROJECT, 2021
## let_me_innn
## File description:
## Makefile
##

SRC	=	main.c	\
		init_nodes.c	\
		open_and_read.c	\
		is_something.c	\
		return_value.c	\
		counter.c		\
		get_infos.c		\
		movement.c		\
		init_struct.c	\
		get_str.c		\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra -pedantic

CPPFLAGS	=	-I./include

NAME	=	lem_in

all:	$(NAME)

$(NAME):	$(OBJ)
	$(MAKE) -C lib/my
	gcc -o $(NAME) $(OBJ) $(CFLAGS) -L lib/my -lmy

debug: CPPFLAGS += -ggdb3
debug: re

clean:
	$(RM) $(OBJ)

fclean: clean
	rm -f $(NAME)
	cd lib/my && make fclean

re: fclean all clean

.PHONY:	fclean all clean re
