/*
** EPITECH PROJECT, 2021
** my_strcat.C
** File description:
** desc
*/

#include "my.h"

char *my_strcat(char *src1, char const *src2)
{
    char *dest = malloc(sizeof(char) * (my_strlen(src1) + my_strlen(src2)));
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
