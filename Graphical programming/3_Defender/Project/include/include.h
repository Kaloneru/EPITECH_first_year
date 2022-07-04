/*
** EPITECH PROJECT, 2022
** include.h
** File description:
** include
*/

#include "lib_csfml.h"
#include "lib_c.h"

#ifndef INCLUDE_H
    #define INCLUDE_H

typedef struct menu_s {
    sfSprite *sprite_fond;
    sfIntRect *hit_box_pos;
    sfVector2i m_pos;
    sfIntRect *button_rect;
    sfSprite *button;
    int menu1;
    sfVector2f scale1;
    sfVector2f scale2;
} menu_t;

typedef struct sound_s {
    sfSprite *sprite_volume;
    sfIntRect *rect_sprite_volume;
    int volume;
    sfVector2f *volumes;
    sfSound *music_jeu;
    sfSound *music_menu;
    sfSound *sound;
    sfSoundBuffer *buff_music_jeu;
    sfSoundBuffer *buff_music_menu;
    sfSoundBuffer *buff_sound;
} sound_t;

typedef struct sprites_s {
    sfVector2f pos_sprite;
    sfIntRect *sprite_rect;
    sfSprite *sprite;
} sprite_t;

typedef struct map_s {
    sfIntRect castle;
    sfSprite *build;
    int map;
    sfIntRect *map_rect;
    int *tour_on_rect;
    sfIntRect *tour_rect;
    sfVector2f *tour_pos;
    sfIntRect sup_tour;
    int *type_tour;
    int nb_tour;
    int clic;
    char **all_map;
} map_t;

typedef struct global_values_s {
    int screen;
    int score;
    sfVector2f mouse;
    int end;
    int frame;
    int on_tour;
    sfClock *my_clock;
    int money;
} global_values_t;

typedef struct save_s {
    char ***save;
} save_t;

typedef struct credit_s {
    char *text_display;
    sfVector2f pos_credit;
    sfFont *font;
    sfText *text;
} credit_t;

typedef struct rect_menu_s {
    sfSprite *menu;
    sfClock *clock;
} rect_menu_t;

typedef struct enemi_s {
    int moov;
    int *enemi;
    sfVector2f *all_pos;
    sfIntRect *hit_box;
    int *health;
    int *v;
    int *annimation;
    int wave;
} enemi_t;

typedef struct all_s {
    sound_t *sound;
    map_t *map;
    global_values_t *global_values;
    menu_t *menu;
    sprite_t *sprite;
    credit_t *credit;
    rect_menu_t *rect_menu;
    enemi_t *enemi;
} all_t;

void init_map_rect(all_t *all);
void init_background_rect(all_t *all);
void init_sound_rect(all_t *all);
void init_tour_rect_two(all_t *all);
void init_tour_rect_one(all_t *all);
void init_tour_rect(all_t *all);
sfSprite *get_sprite(sfTexture* texture);
void init_button_rect(all_t *all);
void modif_rect(all_t *all, int i);
void close_music(all_t *all);
char *my_mem_number(int nb);
void score(all_t *all, sfRenderWindow *window);
int my_strlen(char const *str);
char *load_map(char *filepath);
char **my_str_to_word_array(char const *str, char const delim);
void menu_pause(all_t *all, sfRenderWindow *window, sfEvent event);
void next_wave(all_t *all);
void play_music_in_loop(sfSound *sound, sfSoundBuffer *buffer);
void play_sound(sfSound *sound, sfSoundBuffer *buffer);
void init_music(all_t *all);
void init_mines(all_t *all, sfRenderWindow *window);
int parameter(all_t *all, sfRenderWindow *window);
void init_wall(all_t *all, sfRenderWindow *window);
void init_tour_two(all_t *all, sfRenderWindow *window);
int no_tour_on_path(int i);
void init_pos_buttons(all_t *all);
void set_and_draw_pos(sfSprite *sprite, sfIntRect rect, sfRenderWindow *window, sfVector2f pos);
void credit(all_t *all, sfRenderWindow *window);
int error_handling(int argc, char **argv);
all_t *malloc_struct(all_t *all);
void loop(all_t *all, sfRenderWindow *window, sfEvent event);
void set_and_draw(sfSprite *sprite, sfIntRect rect, sfRenderWindow *window);
void init_game(all_t *all);
all_t *malloc_struct(all_t *all);
int menu(all_t *all, sfRenderWindow *window);
int put_map(all_t *all, sfRenderWindow *window);
void page_one(all_t *all, sfRenderWindow *window);
int mouse_on_button(sfVector2i m_pos, sfIntRect rect);
void game_lunch(all_t *all, sfRenderWindow *window, sfEvent event);
void init_wave(all_t *all);
void put_enemi(all_t *all, sfRenderWindow *window);
void mod_pos(all_t *all);
void init_tour(all_t *all, sfRenderWindow *window);
void put_tour(all_t *all, sfRenderWindow *window);
void reinnit_wave(all_t *all);

#endif /*INCLUDE_H*/
