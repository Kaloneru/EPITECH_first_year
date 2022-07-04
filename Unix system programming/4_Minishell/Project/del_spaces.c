/*
** EPITECH PROJECT, 2022
** del_spaces.c
** File description:
** delete spaces
*/
#include <stdlib.h>
#include "fonctions.h"

char *del_spaces(char *str)
{
    char *result = malloc(sizeof(char) * my_strlen(str));
    int i = 0;
    int j = 0;

    while (str[i] == ' ')
        i++;
    while (str[i] != '\0') {
        while(str[i] == ' ' && str[i + 1] == ' ')
            i++;
        result[j] = str[i];
        j++;
        i++;
    }
    return result;
}
