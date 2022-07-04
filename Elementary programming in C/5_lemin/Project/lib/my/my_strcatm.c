/*
** EPITECH PROJECT, 2021
** my_strcat.C
** File description:
** desc
*/

#include "my.h"

char *my_strcatm(char *s1, char const *s2)
{
    int k = 0;
    char *str = malloc(sizeof(char) * (my_strlen(s1) + my_strlen(s2) + 1));

    for (int i = 0; s1[i] != '\0'; i++) {
        str[i] = s1[i];
        k++;
    }
    for (int j = 0; s2[j] != '\0'; i++) {
        str[j + k] = s2[j];
    }
    str[j + k] = '\0';
    return str;
}
