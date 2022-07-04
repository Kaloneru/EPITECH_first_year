/*
** EPITECH PROJECT, 2022
** options.c
** File description:
** options
*/

#include <stdio.h>
#include <stdlib.h>

int my_strlen(char const *str)
{
    int i;

    i = 0;
    while (str[i] != '\0') {
        i = i + 1;
    }
    return (i);
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

int str_compare(char *str, char *src)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] != src[i])
            return (1);
        i++;
    }
    return (0);
}

int rows(char *str)
{
    int y = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == 9)
            y++;
    }
    return (y + 1);
}

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
