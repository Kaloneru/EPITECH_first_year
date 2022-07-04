##
## EPITECH PROJECT, 2021
## Makefile-lib
## File description:
## desc
##

SRC	=	my_putchar.c				\
		my_putstr.c				\
		my_put_nbr.c				\
		my_swap.c				\
		my_atoi.c				\
		my_revstr.c				\
		my_strlen.c				\
		my_getnbr.c				\
		my_strcpy.c				\
		my_isneg.c				\
		my_strlowcase.c				\
		my_strupcase.c				\
		my_strcat.c				\
		my_strncat.c				\
		my_strcmp.c				\
		my_is_prime.c				\
		my_strdup.c				\
		my_strncpy.c				\
		my_compute_factorial_rec.c		\
		my_compute_power_it.c			\
		int_to_str.c				\
		str_to_word_array.c			\
		my_showmem.c				\
		my_str_islower.c			\
		my_printf.c				\
		convert.c				\
		flags.c					\
		my_strstr.c				\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra

CPPFLAGS	=	-I./include

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	@gcc -c $(SRC) $(CFLAGS)
	@ar rc $(NAME) $(OBJ)
	@cp $(NAME) ../
	@mkdir -p ../../include
	@cp my.h ../../include

clean:
	@rm -f $(OBJ)

fclean:	clean
	@rm -f ../$(NAME)
	@rm -f $(NAME)

re: fclean all clean

.PHONY: fclean all clean
