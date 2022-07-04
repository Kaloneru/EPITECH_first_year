/*
** EPITECH PROJECT, 2022
** tetris
** File description:
** verif_two
*/

#include "include/include.h"

int verif_bord_x(all_t *all, int j)
{
    int x = all->cur_form->pos_x;
    if (x + j >= all->parameter->map_size_x + 1)
        return 1;
    return 0;
}

int verif_bord_y(all_t *all, int i)
{
    int y = all->cur_form->pos_y;
    if (y + i >= all->parameter->map_size_y + 1)
        return 1;
    return 0;
}
