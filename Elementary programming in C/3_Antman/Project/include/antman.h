/*
** EPITECH PROJECT, 2022
** antman.h
** File description:
** antman include
*/

#ifndef ANTMAN_H_
    #define ANTMAN_H_
    #include <stdlib.h>
    #include <unistd.h>
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <stdio.h>

typedef struct giantman_s {
    int len_arr_int;
    char *str;
    char *filepath;
    char filetype;
    char **array;
    int x;
    int rows;
    int columns;
} giantman_t;

typedef struct antman_s {
    char *filepath;
    char filetype;
    char *str;
    char *bitwise;
    char **tab;
    char **array;
    int rows;
    int columns;
    int index;
} antman_t;

void text(antman_t *ant);
int my_strlen(char const *str);
char **mem_alloc_2d_char_array(int rows, int columns);
char *open_and_read(char const *filepath);
int rows(char *str);
int spaces(char *str);
int str_compare(char *str, char *src);
char **str_to_word_array(char *str);
void image(antman_t *ant);
char *my_strcat(char *dest, char const *src);
char *my_itoa(int i);
void my_putchar(char c);
char *my_revstr(char *str);
int bitwise(antman_t *ant);

#endif
