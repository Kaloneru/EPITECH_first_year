/*
** EPITECH PROJECT, 2022
** get_infos.c
** File description:
** desc
*/

#include "lemin.h"

char *get_first_infos(char *str)
{
    int i = 0;
    char *str2 = malloc(sizeof(char) * (my_strlen(str)));

    while (str[i] != '\0') {
        if (str[i] == ' ')
            return str2;
        str2[i] = str[i];
        i++;
    }
    return NULL;
}

int get_second_infos(char *str)
{
    int i = 0;
    int j = 0;
    char *str2 = malloc(sizeof(char) * (my_strlen(str)));

    for (;str[i] != '\0' && str[i] != ' '; i++);
    i++;
    for (;str[i] != ' ' && str[i] != '\0'; i++) {
        str2[j] = str[i];
        j++;
    }
    return atoi(str2);
}

int get_third_infos(char *str)
{
    int i = 0;
    int j = 0;
    char *str2 = malloc(sizeof(char) * (my_strlen(str)));

    for (;str[i] != '\0' && str[i] != ' '; i++);
    i++;
    for (;str[i] != '\0' && str[i] != ' '; i++);
    i++;
    for (;str[i] != ' ' && str[i] != '\0'; i++) {
        str2[j] = str[i];
        j++;
    }
    return atoi(str2);
}
