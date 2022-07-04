##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## makefile
##

SRC =	SRC/main.c						\
		SRC/game/put_map.c				\
		SRC/game/game.c					\
		SRC/game/put_enemi.c			\
		SRC/game/mod_pos.c				\
		SRC/game/init_tour.c			\
		SRC/game/put_tour.c				\
		SRC/game/init_tour_two.c		\
		SRC/game/init_wall.c			\
		SRC/game/init_mines.c			\
		SRC/game/next_wave.c			\
		SRC/game/pause.c				\
		SRC/lib/my_str_to_word_array.c	\
		SRC/lib/my_strlen.c				\
		SRC/lib/error_handling.c		\
		SRC/lib/draw_sprite.c			\
		SRC/lib/mouse_on_button.c		\
		SRC/lib/malloc_struct.c			\
		SRC/init/init_sprites.c			\
		SRC/init/init_wave.c			\
		SRC/init/init_pos_buttons.c		\
		SRC/init/init_randoms_values.c	\
		SRC/init/init_rect.c			\
		SRC/loop.c						\
		SRC/menu/load_save.c			\
		SRC/menu/menu.c					\
		SRC/menu/page_one.c				\
		SRC/menu/credit.c				\
		SRC/menu/parameter.c			\
		SRC/menu/music.c				\
		SRC/menu/modif_rect.c			\
		SRC/game/display_score.c		\

OBJ	=	$(SRC:.c=.o)

REM =	*.gcno  \
		*.gcda  \

NAME	=	my_defender

CC 	= gcc

CFLAGS	= -Wall -Wextra

CPPFLAGS = -Wall -Wextra -g3

all:	$(NAME)

$(NAME):
	$(CC) $(CFLAGS) -lcsfml-graphics -lcsfml-system -lcsfml-window -lcsfml-audio -o $(NAME) $(SRC)
	make clean

debug:
	$(CC) $(CPPFLAGS) -o $(NAME) $(SRC)
	make clean

clean:
	$(RM) $(REM)

fclean: clean
	$(RM) $(NAME)
	$(RM) unit_tests

re:     fclean all

.PHONY: debug clean fclean re
