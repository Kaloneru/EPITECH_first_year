/*
** EPITECH PROJECT, 2022
** get_pos.c
** File description:
** get the position of the caracter
*/
#include "../../include/include.h"
#include <stdlib.h>

void get_pos(inf_t *inf)
{
    int i = 0;
    int j = 0;

    inf->pos = malloc(sizeof(int) * 2);

    while (inf->map[i][j] != 'P') {
        if (inf->map[i][j] == '\0') {
            i++;
            j = 0;
            continue;
        }
        j++;
    }
    inf->pos[0] = i;
    inf->pos[1] = j;
}
