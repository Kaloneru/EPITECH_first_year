/*
** EPITECH PROJECT, 2022
** my_strstr.c
** File description:
** desc
*/

#include "my.h"

int my_strstr(char *str, char const *to_find)
{
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == to_find[j]) {
            j++;
        } else
            j = 0;
        if (to_find[j] == '\0')
            return 0;
    }
    return 1;
}
