##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile for my_rpg
##

SRC	=	main.c						\
		get_line.c					\
		algo.c						\
		lib/get_sprites.c			\
		lib/malloc_struct.c			\
		lib/my_strlen.c				\
		lib/draw_sprite.c			\
		lib/my_str_to_word_array.c	\
		lib/mouse_on_button.c		\
		lib/music_and_sounds.c		\
		lib/my_strcat.c				\
		init/init_sprites_sheet.c	\
		init/malloc_init.c			\
		init/init_sprite_rect.c		\
		init/init_map.c				\
		init/init_button_hit_box.c	\
		init/init_wrandrall.c		\
		menu/menu.c					\
		menu/page_one.c				\
		menu/credit.c				\
		menu/parameter.c			\
		menu/modif_rect.c			\
		menu/parralax.c				\
		menu/how_to_play.c			\
		game/game.c					\
		game/display_screen.c		\
		game/verif_screen.c			\
		game/moov.c					\
		game/display_inventory.c	\
		game/menu_pause.c			\
		game/go_down.c				\
		game/go_up.c				\
		game/is_on_hit_box.c		\
		game/hit_box.c				\
		game/other.c				\
		game/put_essinde.c			\
		game/put_shamrodia.c		\
		game/put_taverne.c			\
		game/put_world.c			\
		fight/fight.c				\
		fight/wrandrall_attacks.c	\
		fight/interaction.c 		\
		fight/init_ennemy.c 		\
		fight/lunch_fight.c 		\
		fight/ennemy_turn.c 		\
		game/game_option.c			\
		lib/motif_volume.c			\
		lib/text_printer.c			\
		lib/my_atoi.c				\
		init/init_other.c			\
		fight/fight_split.c			\
		fight/init_ennemy_two.c		\
		fight/wandrall_attack_two.c	\

BUILDDIR = build

OBJ = $(patsubst %.c, $(BUILDDIR)/%.o, $(SRC))

$(BUILDDIR)/%.o: 	src/%.c
	@mkdir -p $(@D)
	$(CC) $(CPPFLAGS) $(CFLAGS) -c -o $@ $<

CLEAN	=	*~

CFLAGS	=	-Wall -Wextra -lm

CSFMLFLAGS	=	-lcsfml-graphics -lcsfml-audio -lcsfml-system -lcsfml-window

CPPFLAGS	=	-I./include

NAME	=	my_rpg

all: $(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS) $(CPPFLAGS)  $(CSFMLFLAGS)

debug_valgrind: CPPFLAGS += -g3
debug_valgrind: re

debug: CPPFLAGS += -ggdb3
debug: re

clean:
	$(RM) $(OBJ)
	$(RM) $(CLEAN)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: fclean all clean re debug_gdb debug_valgrind
