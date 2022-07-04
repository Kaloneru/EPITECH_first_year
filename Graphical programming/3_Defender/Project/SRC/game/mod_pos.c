/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** mod_pos
*/

#include "../../include/include.h"

static void mod_pos_two(all_t *all, int x, int y, int i)
{
    if (y == 500 && x == 426)
        all->enemi->v[i] = 1;
    if (y == 200 && x == 426)
        all->enemi->v[i] = 0;
    if (y == 200 && x == 726)
        all->enemi->v[i] = 2;
    if (y == 600 && x == 726)
        all->enemi->v[i] = 0;
    if (y == 600 && x == 1126)
        all->enemi->v[i] = 1;
    if (y == 400 && x == 1126)
        all->enemi->v[i] = 0;
    if (y == 400 && x == 1500)
        all->enemi->health[i] = 0;
}

void mod_pos(all_t *all)
{
    float x = 0;
    float y = 0;

    for (int i = 0; i != 50; i++) {
        x = all->enemi->all_pos[i].x;
        y = all->enemi->all_pos[i].y;
        mod_pos_two(all, x, y, i);
        if (all->enemi->v[i] == 0)
            all->enemi->all_pos[i].x += all->enemi->moov * 2;
        if (all->enemi->v[i] == 1)
            all->enemi->all_pos[i].y -= all->enemi->moov * 2;
        if (all->enemi->v[i] == 2)
            all->enemi->all_pos[i].y += all->enemi->moov * 2;
        if (all->enemi->v[i] == 3)
            all->enemi->all_pos[i].x -= all->enemi->moov * 2;
    }
}
