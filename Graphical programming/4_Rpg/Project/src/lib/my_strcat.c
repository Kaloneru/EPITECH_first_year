/*
** EPITECH PROJECT, 2022
** minishel
** File description:
** my_strcat.c
*/

#include "../../include/my_rpg.h"

char *my_strcat(char *src1, char const *src2)
{
    char *dest = malloc(my_strlen(src1) + my_strlen(src2) + 1);
    int i = 0;
    int d = 0;

    while (src1[i] != '\0') {
        dest[i] = src1[i];
        i++;
    }
    while (src2[d] != '\0') {
        dest[i] = src2[d];
        i++;
        d++;

    }
    dest[i] = '\0';
    return dest;
}
