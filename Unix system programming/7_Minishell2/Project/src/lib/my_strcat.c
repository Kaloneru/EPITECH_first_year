/*
** EPITECH PROJECT, 2021
** my_strcat.c
** File description:
** concat two str
*/
#include "minishell.h"

char *my_strcat(char *dest, char const *src)
{
    int buff = my_strlen(dest);
    int i = 0;

    while (src[i] != '\0') {
        dest[buff + i] = src[i];
        i++;
    }
    dest[buff + i] = '\0';
    return dest;
}
