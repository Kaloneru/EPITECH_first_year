/*
** EPITECH PROJECT, 2022
** line.c
** File description:
** deal with the lines
*/
#include "include/include.h"

int line_is_full(all_t *all, int i)
{
    for (int j = 1; all->map->map[i][j] != '|'; j++)
        if (all->map->map[i][j] == ' ')
            return 0;
    return 1;
}

void clear_line(all_t *all, int i)
{
    for (int j = 1; all->map->map[i][j] != '|'; j++)
        all->map->map[i][j] = ' ';
}

void drop_up_line(all_t *all, int i)
{
    for (; i != 2; i--) {
        for (int j = 1; all->map->map[i][j] != '|'; j++)
            all->map->map[i][j] = all->map->map[i - 1][j];
    }
}

void verif_lines(all_t *all)
{
    int mult = 1;
    for (int i = 1; all->map->map[i] != NULL; i++) {
        if (line_is_full(all, i) == 1) {
            clear_line(all, i);
            drop_up_line(all, i);
            all->map->score += all->parameter->map_size_x * mult;
            all->map->lines++;
            i = 1;
            mult++;
        }
    }
}
