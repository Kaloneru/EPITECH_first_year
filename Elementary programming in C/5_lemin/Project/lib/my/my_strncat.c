/*
** EPITECH PROJECT, 2021
** my_strncat.c
** File description:
** desc
*/

#include "my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int buff = my_strlen(dest);

    if (nb > src['\0'] - 1)
        nb = '\0';
    for (int i = 0; src[i] != src[nb]; i++)
        dest[buff + i] = src[i];
    dest[buff + i] = '\0';
    return (dest);
}
