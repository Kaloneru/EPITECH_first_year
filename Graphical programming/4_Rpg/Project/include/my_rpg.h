/*
** EPITECH PROJECT, 2022
** my_rpg.h
** File description:
** my_rpg
*/

#ifndef MY_RPG
    #define MY_RPG
    #include <unistd.h>
    #include <stdio.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <stdlib.h>
    #include <SFML/Audio.h>
    #include <SFML/Graphics.h>
    #include <SFML/Graphics/RenderWindow.h>
    #include <SFML/Graphics/Texture.h>
    #include <SFML/Graphics/Sprite.h>

typedef struct ennemy_s {
    int life;
    int life_left;
    char *name;
    char **attacks_names;
    int *damage;
    int bobo;
    int random;
    int type;
    int pnj;
    int monster;
} ennemy_t;

typedef struct wrandrall_s {
    int in_fight;
    int lifepoint;
    int lifepoint_left;
    int mana;
    int mana_left;
    int stamina;
    int stamina_left;
    char **attacks;
    char **attacks_description;
    int *attacks_damages;
    int *nb_use_attacks;
    int dodge_chance;
    int status;
    int places;
    int lvl;
    int exp_needed_for_next_level;
} wrandrall_t;

typedef struct fight_s {
    sfSprite *sprite_fond;
    sfIntRect *rect_fond;
    int on_attack;
} fight_t;

typedef struct texts_s {
    char **text;
    sfText **the_sfText;
    char **history;
    sfText **sf_history_text;
    sfFont *font_text;
} texts_t;

typedef struct menu_s {
    sfText *text_buttons;
    sfVector2f *pos_text_buttons;
    sfFont *font;
    sfVector2i m_pos;
    sfSprite *curs;
    int volume;
    int screen;
    int screen_before;
    sfSprite *sprite_background;
    sfVector2f pos_background;
    sfVector2f scale_background;
    sfIntRect *hit_box_pos;
    sfSprite *forest;
    sfVector2f pos_fond;
    sfVector2f scale_fond;
    sfSprite *forest_two;
    sfVector2f pos_forest_two;
    sfVector2f scale_forest_two;
} menu_t;

typedef struct game_s {
    int money;
    sfIntRect colision_box;
    sfVector2f inventory_pos;
    sfVector2f stats_pos;
    sfSprite *inventory;
    sfSprite *stats;
    sfSprite *inventory_case;
    sfIntRect screen_load;
    sfVector2f pos_p;
    char **map;
    char **obj;
    char **obj2;
    char **sound;
    char **build;
    char **pnj;
    char **hit_box;
    char **enemi;
} game_t;

typedef struct home_s {
    char **map;
    char **obj;
    char **obj2;
    char **pnj;
    char **hit_box;
} home_t;

typedef struct essinde_s {
    char **map;
    char **obj;
    char **obj2;
    char **pnj;
    char **hit_box;
} essinde_t;

typedef struct shamrodia_s {
    char **map;
    char **obj;
    char **obj2;
    char **pnj;
    char **hit_box;
} shamrodia_t;

typedef struct taverne_s {
    char **map;
    char **obj;
    char **obj2;
    char **pnj;
    char **hit_box;
} taverne_t;

typedef struct hit_box_s {
    sfIntRect *hit_box_all;
    int hit_box;
} hit_box_t;

typedef struct npc_s {
    sfSprite *sprite;
    sfIntRect rect;
    sfVector2f scale;
    sfVector2f pos;
    char **attacks;
    int **damage_attack;
    char **name;
    int *vie;
    sfIntRect hitbox;
} npc_t;

typedef struct obj_s {
    sfSprite *sprite;
    sfIntRect rect;
    sfVector2f scale;
} obj_t;

typedef struct sheet_s {
    sfSprite *button;
    sfSprite *ground;
    sfSprite *enemi;
    sfSprite *obj;
    sfSprite *build;
    sfSprite *pnj;
    sfSprite *cust_p;
    sfSprite *item;
    sfSprite *fight;
    sfSprite *players;
} sheet_t;

typedef struct init_all_s {
    sfIntRect *sprite55;
    sfIntRect *sprite1025;
    sfIntRect *sprite2020;
    sfIntRect *sprite510;
    sfIntRect *sprite2010;
    sfIntRect *sprite1020;
} init_all_t;

typedef struct credit_s {
    sfVector2f pos_credit;
    sfFont *font;
    sfText *text;
    char *text_display;
} credit_t;

typedef struct window_s {
    sfRenderWindow *window;
    sfClock *clock;
    sfEvent event;
} window_t;

typedef struct sound_s {
    int volume;
    sfSprite *sprite_volume;
    sfIntRect *rect_sprite_volume;
    sfVector2f *volumes;
    sfSound *music_jeu;
    sfSound *music_menu;
    sfSoundBuffer *buff_music_jeu;
    sfSoundBuffer *buff_music_menu;
} sound_t;

typedef struct globale_value_s {
    sfVector2f moov;
    sfVector2f prec_pos;
    int run;
    int vitesse;
    int player_display;
    int player_type;
    int time;
    int dont_moov;
    int display_inventory;
    int display_money;
    int pause;
} globale_value_t;

typedef struct scale_s {
    sfVector2f scale;
    sfVector2f scale2;
    sfVector2f scale3;
    sfVector2f scale4;
    sfVector2f scale5;
    sfVector2f scale25;
    sfVector2f inventory;
} scale_t;

typedef struct all_s {
    game_t *game;
    menu_t *menu;
    npc_t *npc;
    obj_t *obj;
    window_t *window;
    init_all_t *init;
    texts_t *texts;
    sheet_t *sheet;
    credit_t *credit;
    sound_t *sound;
    globale_value_t *glbv;
    scale_t *scale;
    hit_box_t *hit_box;
    wrandrall_t *wrandrall;
    fight_t *fight;
    home_t *home;
    essinde_t *essinde;
    shamrodia_t *shamrodia;
    taverne_t *taverne;
    ennemy_t *ennemy;
} all_t;

void set_volume_sounds(all_t *all);

void init_moumoune(all_t *all);
void init_pnj(all_t *all);
void init_boss(all_t *all);
void init_slime(all_t *all);
int display_world(all_t *all);
int save(all_t *all);
int lunch_fight(all_t *all);
void ennemy(all_t *all);
void init_ennemy_first_part(all_t *all, int life, char *name);
void init_enemy_second_part(all_t *all, char *attack, char *damage);
void init_moumoune(all_t *all);
void attack_ennemy2(all_t *all);
int is_on_hit_box(all_t *all, sfVector2f pos_p);
char *int_to_str(int nb);
int put_taverne(all_t *all, sfVector2f pos, int i, int j);
int put_shamrodia(all_t *all, sfVector2f pos, int i, int j);
int put_essinde(all_t *all, sfVector2f pos, int i, int j);
int put_home(all_t *all, sfVector2f pos, int i, int j);
int verif_screen_taverne(all_t *all, sfVector2f pos, int i, int j);
int verif_screen_shamrodia(all_t *all, sfVector2f pos, int i, int j);
int verif_screen_essinde(all_t *all, sfVector2f pos, int i, int j);
int go_up(all_t *all, sfVector2f pos_p);
int fight(all_t *all, int fond);
int display_button_attack(all_t *all);
int display_buttons_attacks(all_t *all);
int display_attacks_names(all_t *all);
void consequences_of_attack(all_t *all);
void consequence_of_chosen_attack(all_t *all);
int display_text_bar(all_t *all, int screen);
int verif_screen_home(all_t *all, sfVector2f pos, int i, int j);
int display_text_bar1(all_t *all, int screen);
int display_text_bar2(all_t *all, int screen);
void display_not_enouth_stamina(all_t *all);
void display_not_enouth_mana(all_t *all);
int go_down(all_t *all, sfVector2f pos_p);
char *display_stats(char *str, int curr, int max);

char *int_to_str(int nb);
int my_arrlen(char **array);
void print_text_real_size(all_t *all, sfVector2f pos, char *string, int size);
int verif_screen3(all_t *all, sfVector2f pos, int i, int j);
int put_build_two(all_t *all, sfVector2f pos, int i, int j);
char *my_strcat(char *src1, char const *src2);
int init_wrandrall(all_t *all);
void init_pos_buttons(all_t *all);
int put_elem(all_t *all, sfVector2f pos, int i, int j);
void init_map(all_t *all);
char *open_and_read(char const *filepath);
int verif_screen(all_t *all, sfVector2f pos, int i, int j);
int game(all_t *all);
int display_screen(all_t *all);
sfSprite *get_sprite(char *img);
sfIntRect *init_sprite_rect(int nb_alloc, int width, int height, int size);
void init_malloc(all_t *all);
void init_sprites_sheets(all_t *all);
void malloc_struct(all_t *all);
void draw_sprite(all_t *all, int i);
char **my_str_to_word_array(char const *str, char const delim);
int my_strlen(char const *str);
void texts_to_tab(all_t *all);
void free_rpg(all_t *all);
int loop(all_t *all);
int mouse_on_button(sfVector2i m_pos, sfIntRect rect);
void set_and_draw(sfSprite *sprite, sfIntRect rect, sfRenderWindow *window);
void set_and_draw_pos(sfSprite *sprite, sfIntRect rect,
sfRenderWindow *window, sfVector2f pos);
void page_one(all_t *all);
int parameter(all_t *all);
void credit(all_t *all);
int menu(all_t *all);
int moov(all_t *all);
void malloc_text_tab(all_t *all);
void print_text(all_t *all, int pos_x, int pos_y, int a);
void malloc_text_history(all_t *all);
void print_text_english(all_t *all, int pos_x, int pos_y, int number_line);
int parralax(all_t *all);
void print_text_real(all_t *all, sfVector2f pos, char *string);
void display_button(all_t *all, sfVector2f pos, int screen, int hit_box_nb);
void pos_buttons(all_t *all, sfVector2f pos, int num_button);
void print_text_credit(all_t *all, sfVector2f pos, char *string);
int how_to_play(all_t *all);
int verif_screen2(all_t *all, sfVector2f pos, int i, int j);
int put_build(all_t *all, sfVector2f pos, int i, int j);
int display_inventory(all_t *all);
void print_text_america(all_t *all, sfVector2f pos, char *string);
void print_text_harlow(all_t *all, sfVector2f pos, char *string);
int hit_box_to_int(sfIntRect *rect, all_t *all);
int hit_box_one(all_t *all, sfVector2f pos, char c);
int hit_box_two(all_t *all, sfVector2f pos, char c);
int hit_box_three(all_t *all, sfVector2f pos, char c);
int hit_box_four(all_t *all, sfVector2f pos, char c);
int hit_box_five(all_t *all, sfVector2f pos, char c);
int display_world(all_t *all);
int put_pnj_home(all_t *all, sfVector2f pos, int i, int j);
int put_home(all_t *all, sfVector2f pos, int i, int j);
int display_home(all_t *all);
int display_shamrodia(all_t *all);
int put_shamrodia(all_t *all, sfVector2f pos, int i, int j);
int put_pnj_shamrodia(all_t *all, sfVector2f pos, int i, int j);
int put_pnj_essinde(all_t *all, sfVector2f pos, int i, int j);
int put_essinde(all_t *all, sfVector2f pos, int i, int j);
int display_essinde(all_t *all);
int display_taverne(all_t *all);
int put_taverne(all_t *all, sfVector2f pos, int i, int j);
int put_pnj_taverne(all_t *all, sfVector2f pos, int i, int j);
int put_elem(all_t *all, sfVector2f pos, int i, int j);
int put_pnj(all_t *all, sfVector2f pos, int i, int j);
int print_text_pnj(all_t *all, sfVector2f pos);
void print_text_real_pnj(all_t *all, sfVector2f pos, char *string);
int set_hit_box(all_t *all, sfVector2f pos, char c);
int display_world_two(all_t *all, sfVector2f pos);
int init_all_pos(all_t *all);
void init_all_rect(all_t *all);
void init_solo_sprite(all_t *all);
void init_sprites_sheets_two(all_t *all);
int init_glbv(all_t *all);
int display_fond(all_t *all, int fond);
void display_enemy(all_t *all);
int display_wrandrall(all_t *all);
int display_text_bar1(all_t *all, int screen);
int display_text_bar2(all_t *all, int screen);
void init_slime(all_t *all);
void init_boss(all_t *all);
void init_pnj(all_t *all);
void init_moumoune(all_t *all);
int display_button_attack(all_t *all);
int display_buttons_attacks(all_t *all);
int display_attacks_names(all_t *all);

//lib
char **mem_alloc_2d_char_array(int rows, int columns);
int mouse_on_button_float(sfVector2i m_pos, sfFloatRect rect);
int menu_pause(all_t *all);
int parameter_game(all_t *all);
int modif_volume_one(all_t *all, int i);
int modif_volume_two(all_t *all, int i);
int modif_volume_three(all_t *all, int i);
int modif_volume_four(all_t *all, int i);
int my_atoi(char const *str);

/*Sound*/
int set_volume(all_t *all, int volume);
void init_music(all_t *all);
void play_music_in_loop(sfSound *sound, sfSoundBuffer *buffer);
void play_music(sfSound *sound, sfSoundBuffer *buffer);

#endif/* !RPG_H_ */
