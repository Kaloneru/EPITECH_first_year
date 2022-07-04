/*
** EPITECH PROJECT, 2022
** lemin.h
** File description:
** desc
*/

#ifndef LEMIN_H
    #define LEMIN_H
    #include "my.h"
    #include <stdbool.h>
    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <string.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>

typedef struct file_s {
    char **directions;
    char **initialisation;
    int nb_node;
    char **anthill;
} file_t;

typedef struct infos_s {
    char *name;
    int *cord;
    int *dest;
    int *src;
    bool ant_on_node;
    int nb_fourmi_on_node;
} infos_t;

int main(int argc, char **argv);
void treat_the_direction(file_t *file);
int is_alpha(char cara);
int is_num(char cara);
int is_numb(char *str, int i, char sep);
int is_word(char *str, int i, char sep);
int return_one(char *str, char sep);
int return_two(char *str, char sep);
int return_three_four(char *str, char sep);
int is_comment(char *str);
int get_forme_string(char *str, int ok, int i);
void fais_avancer_fourmies(infos_t *infos, file_t *file);
void calcul_number_of_node(file_t *file);
void lem_in(infos_t *infos, file_t *file);
int count_dest(file_t *file, char *name_of_the_node);
int count_src(file_t *file, char *name_of_the_node);
char *get_first_infos(char *str);
int get_second_infos(char *str);
int get_third_infos(char *str);
void init_struct(infos_t *infos, file_t *file);
int *get_string(file_t *file, char *node, int *find_all_dest);
int len_name_max(infos_t *infos);
int find_name_in_info(infos_t *infos, char *name);
char *get_end_str(char *str, char sep);
int find_all_dest(file_t *file, infos_t *info, int j);
char *get_start_str(char *str, char sep);
int find_all_src(file_t *file, infos_t *info, int j);
int init_dests(infos_t *infos ,file_t *files);
char **mem_alloc_2d_char_array(int rows, int columns);
char *open_and_read(char const *filepath);
int return_five(char *str);
#endif
