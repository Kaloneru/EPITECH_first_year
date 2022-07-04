/*
** EPITECH PROJECT, 2022
** lib
** File description:
** str_to_word_array.c
*/

#include "my.h"

static int spaces(char *str)
{
    int w = 0;
    int j = 0;

    while (str[w] == ' ' || str[w] == '\t') {
        j++;
        w++;
    }
    return (j);
}

static int rows(char *str, char sep)
{
    int y = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] == sep))
            y++;
    }
    return (y + 1);
}

char **mem_alloc_2d_char_array(int rows, int columns)
{
    int i = 0;
    char **arr = malloc(sizeof(char *) * (rows + 1));

    while (i < rows) {
        arr[i] = malloc(sizeof(char) * columns);
        i++;
    }
    return (arr);
}

char **str_to_word_array(char *str, char sep)
{
    char **tab = mem_alloc_2d_char_array(rows(str, sep), my_strlen(str) + 1);
    int i = spaces(str), j = 0, k = 0;

    while (str[i] != '\0') {
        if (str[i] == sep) {
            tab[j][k] = '\0';
            //i++;
            j++;
            k = 0;
        }
        tab[j][k] = str[i];
        i++;
        k++;
    }
    tab[j + 1] = NULL;
    return tab;
}
