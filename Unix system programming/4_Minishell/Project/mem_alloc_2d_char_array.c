/*
** EPITECH PROJECT, 2022
** mem_alloc_2d_char_array.c
** File description:
** malloc a char**
*/
#include <stdlib.h>

int spaces(char *str)
{
    int w = 0;
    int j = 0;

    while (str[w] == ' ' || str[w] == '\t') {
        j++;
        w++;

    }
    return (j);

}

int rows(char *str, char sep)
{
    int y = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == sep)
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
        i = i + 1;

    }
    return (arr);
}
