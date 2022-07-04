/*
** EPITECH PROJECT, 2022
** del_spaces.c
** File description:
** delete the spaces that don't need to be there
*/
#include "minishell.h"

static int del_spaces_before(char *buffer)
{
    int i = 0;

     while (buffer[i] == ' ' || buffer[i] == '\t')
        i++;
     return i;
}

static int del_space_after(char *buffer, int j)
{
    while (buffer[j] == ' ' || buffer[j] == '\t') {
        j -= 1;
    }
    return j;
}

char *del_spaces(char *buffer)
{
    int i = del_spaces_before(buffer);
    int k = 0;
    int j = my_strlen(buffer) - 1;
    char *str = malloc(sizeof(char) * my_strlen(buffer) + 1);
    j = del_space_after(buffer, j);
    while (i <= j) {
        if ((buffer[i] == ' ' && buffer[i + 1] == ' ') ||
            (buffer[i] == '\t' && buffer[i + 1] == '\t') ||
            (buffer[i] == ' ' && buffer[i + 1] == '\t') ||
            (buffer[i] == '\t' && buffer[i + 1] == ' ')) {
            i++;
            continue;
        }
        str[k] = buffer[i];
        k++;
        i++;
    }
    return str;
}
