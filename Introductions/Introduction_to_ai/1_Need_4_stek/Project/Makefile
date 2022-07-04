##
## EPITECH PROJECT, 2022
## n4s
## File description:
## Makefile
##

SRC	=	main.c					\
		algo.c					\
		get_infos.c				\
		get_line.c				\
		my_strcmp.c				\
		my_strlen.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra

CPPFLAGS	=	-I./include

NAME	=	ai

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)
	cp $(NAME) n4s_package

debug: CFLAGS += -g3
debug:	$(OBJ)
	$(RM) $(NAME)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
	$(RM) $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all clean

.PHONY:	fclean all clean re
