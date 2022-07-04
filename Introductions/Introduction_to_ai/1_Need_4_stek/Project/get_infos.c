/*
** EPITECH PROJECT, 2022
** get_infos.c
** File description:
** stock the infos from the lidar in a struct
*/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/ai.h"

int nb_semicolons(char const *str)
{
    int nb_semicolons = 0;

    for (int i = 0; str[i] != '\0'; i++)
        if (str[i] == ':')
            nb_semicolons++;
    return nb_semicolons;
}

char *get_infos_from_lidar(char *str, int indice)
{
    int colons = nb_semicolons(str);
    int i = 0;
    int j = 0;
    char *str2;

    if (indice > colons)
        return NULL;
    for (; i != indice; j++) {
        if (str[j] == ':')
                i++;
    }
    i = 0;
    str2 = malloc(sizeof(char) * 100);
    while(str[j] != '\0') {
        if (str[j] == ':')
            break;
        str2[i] = str[j];
        i++;
        j++;
    }
    return str2;
}

int get_all_info(n4s_t *n4s, char *line)
{
    n4s->front = atof(get_infos_from_lidar(line, 17));
    n4s->right = atof(get_infos_from_lidar(line, 34));
    n4s->left = atof(get_infos_from_lidar(line, 4));
    n4s->end = get_infos_from_lidar(line, 35);
    return 0;
}
