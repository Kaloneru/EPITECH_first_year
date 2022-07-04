##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## day10
##

SRC =		my_compute_power_rec.c \
		my_compute_square_root.c \
		my_getnbr.c \
		my_isneg.c \
		my_is_prime.c \
		my_putchar.c \
		my_put_nbr.c \
		my_putstr.c \
		my_revstr.c \
		my_strdup.c \
		my_strcat.c \
		my_strcpy.c \
		my_str_isalpha.c \
		my_str_isnum.c \
		my_strlen.c \
		my_strncat.c \
		my_strncpy.c \
		my_strstr.c \
		my_swap.c \
		mem_alloc_2d_char_array.c	\


OBJ = $(SRC:.c=.o)

CPPFLAGS = -I./include

NAME = libmy.a

all: $(NAME)

$(NAME):	$(OBJ)
		gcc -c $(SRC)
		ar rc $(NAME) $(OBJ)
		mkdir -p ../../include
		cp $(NAME) ../
		cp my.h ../../include

clean:
	$(shell rm -f $(OBJ))

fclean: clean
	$(shell rm -f $(NAME))
