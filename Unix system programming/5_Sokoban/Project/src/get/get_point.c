/*
** EPITECH PROJECT, 2022
** get_point.c
** File description:
** get the point
*/
#include "../../include/include.h"
#include <stdlib.h>
#include <stddef.h>

int pos_box_point(inf_t *inf, int i, int j)
{
    int k = 0;

    while (k != inf->nb_o) {
        if (inf->pos_o[k][0] == i && inf->pos_o[k][1] == j)
            return 1;
        k++;
    }
    return 0;
}

void reset_point(inf_t *inf)
{
    int i = 0;
    int x = 0;
    int y = 0;

    while (i < inf->nb_o) {
        x = inf->pos_o[i][0];
        y = inf->pos_o[i][1];
        if (inf->map[x][y] == ' ')
            inf->map[x][y] = 'O';
        i++;
    }
}

void get_box(inf_t *inf)
{
    int i = 0;

    while (inf->buffer[i] != '\0') {
        if (inf->buffer[i] == 'X')
            inf->nb_box++;
        i++;
    }
}

void get_point2(inf_t *inf, point_t *point)
{
    if (inf->map[point->i_map][point->j_map] == 'O') {
        inf->pos_o[point->i_point] = malloc(sizeof(int) * 2);
        inf->pos_o[point->i_point][0] = point->i_map;
        inf->pos_o[point->i_point][1] = point->j_map;
        point->i_point++;
    }
}

void get_point(inf_t *inf, point_t *point)
{
    int tmp = 0;

    for (int count = 0; inf->buffer[count] != '\0'; count++) {
        if (inf->buffer[count] == 'O') {
            tmp += 1;
        }
    }
    inf->nb_o = tmp;
    inf->pos_o = malloc(sizeof(int *) * inf->nb_o);
    while (inf->map[point->i_map] != NULL) {
        while (inf->map[point->i_map][point->j_map] != '\0') {
            get_point2(inf, point);
            point->j_map++;
        }
        point->j_map = 0;
        point->i_map++;
    }
}
