/*
** EPITECH PROJECT, 2021
** my_strdup.c
** File description:
** day08
*/
#include <stdlib.h>
int my_strlen(char const *str);

char *my_strcpy(char *dest, char const *src);

char *my_strdup(char const *src)
{
    char *str;
    int ac = my_strlen(src) + 1;

    str = malloc(sizeof(char) * (ac));
    my_strcpy(str, src);
    return (str);
}
