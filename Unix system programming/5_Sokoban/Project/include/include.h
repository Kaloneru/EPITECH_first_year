/*
** EPITECH PROJECT, 2022
** include.h
** File description:
** include sokoban
*/

#ifndef INCLUDE_H
    #define INCLUDE_H

typedef struct point_s {
    int i_map;
    int j_map;
    int i_point;
} point_t;

typedef struct inf_s {
    int end;
    char *buffer;
    int **pos_o;
    int nb_box;
    int nb_o;
    int *pos;
    char **map;
} inf_t ;
void check_elem(inf_t *inf);
void end(inf_t *inf);
char *open_and_read(char const *filepast);
int my_strlen(char const *str);
void sokoban(inf_t *inf);
void get_buffer(char *map, inf_t *inf);
char **mem_alloc_2d_char_array(int rows, int columns);
int rows(char *str, char sep);
int spaces(char *str);
char **str_to_word_array(char *str, char set);
void get_pos(inf_t *inf);
void get_point(inf_t *inf, point_t *point);
void reset_point(inf_t *inf);
void moov(inf_t *inf, int key);
void moov_right(inf_t *inf);
void moov_high(inf_t *inf);
void moov_low(inf_t *inf);
void moov_left(inf_t *inf);
void check_end(inf_t *inf);
int check_loose(inf_t *inf);
int check_bord(inf_t *inf, int i, int j);
void get_box(inf_t *inf);
void colors(void);
int pos_box_point(inf_t *inf, int i , int j);
void check_size(inf_t *inf, int key);
int my_tablen(char **tab);
void set_structures(char **argv, inf_t *inf, point_t *point);
void put_map(inf_t *inf);
void check_walls(inf_t *inf);
int my_strcmp(char *s1, char *s20);
void check_line(inf_t *inf);
void my_putchar(char c);
int my_putstr(char const *str);
void check_perso(inf_t *inf);
#endif/*INCLUDE_H*/
//free inf->pos
//free inf->map
//free inf->pos_o
//free inf->buffer
