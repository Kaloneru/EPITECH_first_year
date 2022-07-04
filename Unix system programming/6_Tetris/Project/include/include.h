/*
** EPITECH PROJECT, 2022
** tetris
** File description:
** include
*/

#ifndef INCLUDE_H
    #define INCLUDE_H
    #include <stdlib.h>
    #include <stdio.h>
    #include <unistd.h>
    #include <time.h>
    #include <stdbool.h>
    #include <sys/stat.h>
    #include <ncurses.h>
    #include <time.h>
    #include <dirent.h>

typedef struct parameter_s {
    int level;
    int key_left;
    int key_right;
    int key_turn;
    int key_drop;
    int key_quit;
    int key_pause;
    int map_size_x;
    int map_size_y;
    bool without_next;
    bool debug;
} parameter_t;

typedef struct cur_form_s {
    int next_form;
    char **form;
    int pos_x;
    int pos_y;
    int x_p;
    int y_p;
    int new_x_p;
    int new_y_p;
    int more_long;
} cur_form_t;

typedef struct all_form_s {
    char ***all_form;
    char **all_name_form;
    int **cara_form;
    int nb;
} all_form_t;

typedef struct map_s {
    char **map;
    unsigned long clock;
    time_t start;
    time_t now;
    unsigned long score;
    int lines;
} map_t;

typedef struct init_form_s {
    char **form;
} init_form_t;

typedef struct all_s {
    parameter_t *parameter;
    cur_form_t *cur_form;
    all_form_t *all_form;
    map_t *map;
    init_form_t *forms;
} all_t;

int verif_bord_x(all_t *all, int j);
int verif_bord_y(all_t *all, int i);
void my_putchar(char c);
int my_put_nbr(int nb);
void new_form(all_t *all);
void free_tab(char **tab);
void size_map(all_t *all);
int count_line_in_form(char **form);
int more_long(char **form);
char **cpy(char **form);
void free_tab(char **tab);
int line_is_full(all_t *all, int i);
void clear_form(all_t *all, char **form);
void free_all(all_t *all);
int perma_moov(all_t *all, char **form, int key);
char **my_rotate_form(all_t *all, char **form);
void rotate(all_t *all, int max);
void moov_to_left(all_t *all, char **form);
void moov_to_right(all_t *all, char **form);
void clear_line(all_t *all, int i);
void drop_up_line(all_t *all, int i);
void verif_lines(all_t *all);
int verif_right(all_t *all, char **form);
int verif_end(all_t *all, char **form, int key);
int verif_next(all_t *all, char **form);
int verif_left(all_t *all, char **form);
void put_map(all_t *all);
void put_form(all_t *all, char **form);
void initialize_game(all_t *all);
void malloc_struct(all_t *all);
void take_all_form(all_t *all);
int my_str_isnum(char const *str);
char *my_strcat(char *src1, char const *src2);
char **my_str_to_word_array(char const *str, char const delim);
char *open_and_read(char const *filepath);
void map_generator(all_t *all);
void my_put_tab(char **tab);
void my_putstr(char const* str);
int my_strlen(char const *str);
char **mem_alloc_2d_char_array(int rows, int columns);
int my_strcmp(char const *s1, char const *s2);
int fill_struct(all_t *all, int argc, char **argv);
int check_struct(all_t *all);
int calc_max(all_t *all, int i);

#endif /*INCLUDE_H*/
