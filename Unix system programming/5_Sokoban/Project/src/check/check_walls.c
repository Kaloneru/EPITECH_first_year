/*
** EPITECH PROJECT, 2022
** check_walls.c
** File description:
** check if there no space in the walls
*/
#include "../../include/include.h"
#include <stddef.h>

void check_walls(inf_t *inf)
{
    int x = my_strlen(inf->map[0]) - 1;
    int y = my_tablen(inf->map) - 3;

    for (int j = 0; inf->map[0][j] != '\0'; j++) {
        if (inf->map[0][j] != '#')
            inf->end = 3;
    }
    for (int i = 1; i != y - 1; i++) {
        if (inf->map[i][0] != '#')
            inf->end = 3;
    }
    for (int i = 1; i != y - 1; i++) {
        if (inf->map[i][x] != '#')
            inf->end = 3;
    }
    for (int j = 0; inf->map[y][j] != '\0'; j++) {
        if (inf->map[y][j] != '#')
            inf->end = 3;
    }
}
