/*
** EPITECH PROJECT, 2022
** my_str
** File description:
** desc
*/

#include "minishell.h"

static int rows(char *str, char sep)
{
    int y = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == sep || str[i] == 9)
            y++;
    }
    return y + 1;
}

static int spaces(char *str, char sep)
{
    int w = 0;
    int j = 0;

    while (str[w] == sep || str[w] == '\t') {
        j++;
        w++;
    }
    return j;
}

static char **mem_alloc_2d_char_array(int rows, int columns)
{
    int i = 0;
    char **arr = malloc(sizeof(char *) * (rows + 1));

    while (i < rows) {
        arr[i] = malloc(sizeof(char) * columns + 1);
        i = i + 1;
    }
    return (arr);
}

char **str_to_word_array(char *str, char sep)
{
    char **tab = mem_alloc_2d_char_array(rows(str, sep), my_strlen(str));
    int i = spaces(str, sep);
    int j = 0;
    int k = 0;

    while (str[i] != '\0') {
        if (str[i] == sep || str[i] == '\t') {
            i++;
            j++;
            k = 0;
        }
        tab[j][k] = str[i];
        i++;
        k++;
    }
    if (j == 0)
        j++;
    return tab;
}
