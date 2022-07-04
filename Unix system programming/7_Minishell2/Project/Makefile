##
## EPITECH PROJECT, 2022
## minishell2
## File description:
## Makefile
##

SRC	=	main.c							\
		cd/command_cd.c					\
		cd/get_new_pwd.c				\
		infos_and_parcing/infos_loop.c	\
		infos_and_parcing/del_spaces.c	\
		lib/my_putchar.c				\
		lib/my_putstr.c					\
		lib/my_strchar.c 				\
		lib/my_strlen.c 				\
		lib/my_strcmp.c 				\
		lib/my_strncmp.c 				\
		lib/my_strcat.c 				\
		lib/my_strcut.c 				\
		lib/my_strcpy.c 				\
		lib/my_strcat_malloc.c 			\
		lib/str_to_word_array.c 		\
		loop/needed_by_shell_loop.c		\
		loop/shell_loop.c				\
		loop/exec.c						\

BUILDDIR = build

OBJ = $(patsubst %.c, $(BUILDDIR)/%.o, $(SRC))

$(BUILDDIR)/%.o: 	src/%.c
	@mkdir -p $(@D)
	$(CC) $(CPPFLAGS) $(CFLAGS) -c -o $@ $<

CFLAGS	=	-Wall -Wextra

CPPFLAGS	=	-I./include

NAME	=	mysh

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)


debug: CPPFLAGS += -g3
debug: re

clean:
	@$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all clean

.PHONY: fclean all clean debug
