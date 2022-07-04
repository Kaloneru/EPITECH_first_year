/*
** EPITECH PROJECT, 2021
** ouais.h
** File description:
** ouais
*/

#ifndef OUAIS_H_
    #define OUAIS_H_
    #include "include.h"

typedef struct menu_s {
    sfTexture *texture_menu;
    sfSprite *sprite_menu;
    sfVector2f pos_menu;
    sfVector2f scale_menu;
} menu_t;

typedef struct perso_s {
    sfTexture *texture_perso01;
    sfSprite *sprite_perso01;
    sfTexture *texture_perso02;
    sfSprite *sprite_perso02;
    sfTexture *texture_perso03;
    sfSprite *sprite_perso03;
    sfTexture *texture_perso04;
    sfSprite *sprite_perso04;
    sfTexture *texture_perso05;
    sfSprite *sprite_perso05;
    sfTexture *texture_perso06;
    sfSprite *sprite_perso06;
    sfVector2f posp;
    sfVector2f scalep;
} perso_t;

typedef struct jump_s {
sfTexture *texture_jump01;
    sfSprite *sprite_jump01;
    sfVector2f scalej01;
    sfTexture *texture_jump02;
    sfSprite *sprite_jump02;
    sfTexture *texture_jump03;
    sfSprite *sprite_jump03;
    sfTexture *texture_jump04;
    sfSprite *sprite_jump04;
    sfVector2f posj;
    sfVector2f scalej;
} jump_t;

typedef struct death_s {
    sfTexture *texture_death01;
    sfSprite *sprite_death01;
    sfTexture *texture_death02;
    sfSprite *sprite_death02;
    sfTexture *texture_death03;
    sfSprite *sprite_death03;
    sfTexture *texture_death04;
    sfSprite *sprite_death04;
    sfTexture *texture_death05;
    sfSprite *sprite_death05;
    sfTexture *texture_death06;
    sfSprite *sprite_death06;
    sfVector2f posd;
    sfVector2f scaled;
} death_t;

typedef struct parallax_s {
    sfTexture *texture_parallax;
    sfSprite *sprite_parallax;
    sfVector2f pos_pa;
    sfVector2f scale_pa;
    sfVector2f pos_pa_2;

    sfTexture *texture_parallax01;
    sfSprite *sprite_parallax01;
    sfVector2f pos_pa01;
    sfVector2f scale_pa01;
    sfVector2f pos_pa01_2;
    
    sfTexture *texture_parallax02;
    sfSprite *sprite_parallax02;
    sfVector2f pos_par02;
    sfVector2f scale_par02;
    sfVector2f pos_par02_2;
    
    sfTexture *texture_parallax03;
    sfSprite *sprite_parallax03;
    sfVector2f pos_par03;
    sfVector2f scale_par03;
    sfVector2f pos_par03_2;
} parallax_t;

typedef struct obstacle {
    sfTexture *texture_obstacle01;
    sfSprite *sprite_obstacle01;
    sfVector2f pos_ob01;
    sfVector2f scale_ob01;
    sfVector2f pos_ob01_2;
} obstacle_t;

typedef struct game_s {
    int screen;
    sfTexture *texture_game_over;
    sfSprite *sprite_game_over;
    sfTexture *texture_win;
    sfSprite *sprite_win;
    sfVector2f pos_wi;
    sfVector2f scalewi;
    sfVector2f pos_go;
    sfVector2f scalego;
} game_t;

typedef struct sound_s {
    sfSound *music;
    sfSoundBuffer *buff_music;
    sfSound *jump;
    sfSoundBuffer *buff_jump;
} sound_t;

typedef struct map_s {
    int i_map;
    char **map;
} map_t;

typedef struct all_s {
    menu_t *menu;
    perso_t *perso;
    jump_t *jump;
    death_t *death;
    parallax_t *parallax;
    obstacle_t *obstacle;
    game_t *game;
    sound_t *sound;
    sfFont *font;
    sfText *text;
    int score;
}all_t;

void perso_jump(all_t *all);
void perso(all_t *all);
int display_walk(sfRenderWindow *window, int counter, all_t *all);
int display_jump(sfRenderWindow *window, int counter, all_t *all);
void play_jump(all_t *all);
int display_perso(sfRenderWindow *window, int counter, all_t *all);
void display_menu(sfRenderWindow *window, all_t *all);
void obstacle(all_t *all);
int random_x01();
int random_x02();
void obstacle_if(all_t *all, map_t *map);
void display_obstacle_inf(sfRenderWindow *window, all_t *all);
void parallax(all_t *all);
void parallax_if(all_t *all);
void display_parallax(sfRenderWindow *window, all_t *all);
void perso_death(all_t *all);
int display_death(sfRenderWindow *window, int counter, all_t *all, map_t *map);
int display_death2(all_t *all, int counter, sfRenderWindow *window);
int display_game_over(all_t *all, int counter, sfRenderWindow *window);
void game_over(all_t *all);
void pos_and_scale(all_t *all);
void pos_and_scale2(all_t *all, map_t *map);
void etoile_malloque(all_t *all);
void set_sprite(all_t *all);
void set_values(all_t *all, map_t *map);
void reset_values(all_t *all);
void play_music(all_t *all);
void music(all_t *all);
int my_atoi(char *str);
int display_win(sfRenderWindow *window, all_t *all, int counter);
void win(all_t *all);
int walk1(sfRenderWindow *window, int counter, all_t *all);
int walk2(sfRenderWindow *window, int counter, all_t *all);
int walk3(sfRenderWindow *window, int counter, all_t *all);
int walk4(sfRenderWindow *window, int counter, all_t *all);
int walk5(sfRenderWindow *window, int counter, all_t *all);
int walk6(sfRenderWindow *window, int counter, all_t *all);
int jump01(sfRenderWindow *window, int counter, all_t *all);
int jump02(sfRenderWindow *window, int counter, all_t *all);
int jump03(sfRenderWindow *window, int counter, all_t *all);
int jump04(sfRenderWindow *window, int counter, all_t *all);
char *my_strcat(char *dest, char const *src);
int my_strlen(char const *str);
int my_strcmp(const char *str1, const char *str2);
void convert_map(char *src, map_t *map);
char *get_map(char const *filepath, map_t *map);
int menu(all_t *all, sfRenderWindow *window);
int display_map1(sfRenderWindow *window, int counter, all_t *all, map_t *map);
void parallax01(sfRenderWindow *window, all_t *all);
void parallax02(sfRenderWindow *window, all_t *all);
void parallax03(sfRenderWindow *window, all_t *all);
void parallax04(sfRenderWindow *window, all_t *all);
void parallax05(sfRenderWindow *window, all_t *all);
void parallax06(sfRenderWindow *window, all_t *all);
void parallax07(sfRenderWindow *window, all_t *all);
void parallax08(sfRenderWindow *window, all_t *all);
void parallax_if01(all_t *all);
void parallax_if02(all_t *all);
char *recup_score(all_t *all);
void display_score(sfRenderWindow *window, all_t *all);
int display_death03(all_t *all, int counter, sfRenderWindow *window);
int display_death04(all_t *all, int counter, sfRenderWindow *window);
int display_death05(all_t *all, int counter, sfRenderWindow *window);
int display_death06(all_t *all, int counter, sfRenderWindow *window);
int display_death07(all_t *all, int counter, sfRenderWindow *window);
int display_death08(all_t *all, int counter, sfRenderWindow *window);
#endif
