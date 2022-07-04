/*
** EPITECH PROJECT, 2022
** str_to_word_arrrays.c
** File description:
** divise a string to an array at each point
*/
#include "../include/include.h"

char **str_to_word_array(char *str, char sep)
{
    char **tab = mem_alloc_2d_char_array(rows(str, sep), my_strlen(str));
    int i = spaces(str);
    int j = 0;
    int k = 0;

    while (str[i] != '\0') {
        if (str[i] == sep) {
            i++;
            j++;
            k = 0;
        }
        tab[j][k] = str[i];
        i++;
        k++;
    }
    return (tab);
}
