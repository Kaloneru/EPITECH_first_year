/*
** EPITECH PROJECT, 2021
** rpg
** File description:
** verif_screen.c
*/

#include "../../include/my_rpg.h"

int verif_screen(all_t *all, sfVector2f pos, int i, int j)
{
    if (pos.y > -200 && pos.y < 1300)
        if (pos.x > -200 && pos.x < 2200)
            put_elem(all, pos, i, j);
    return 0;
}

int verif_screen2(all_t *all, sfVector2f pos, int i, int j)
{
    if (pos.y > -500 && pos.y < 1300)
        if (pos.x > -500 && pos.x < 2200)
            put_build(all, pos, i, j);
    return 0;
}

int verif_screen3(all_t *all, sfVector2f pos, int i, int j)
{
    if (pos.y > -500 && pos.y < 1300)
        if (pos.x > -500 && pos.x < 2200)
            put_build_two(all, pos, i, j);
    return 0;
}

int verif_screen_home(all_t *all, sfVector2f pos, int i, int j)
{
    if (pos.y > -200 && pos.y < 1300)
        if (pos.x > -200 && pos.x < 2200)
            put_home(all, pos, i, j);
    return 0;
}

int verif_screen_essinde(all_t *all, sfVector2f pos, int i, int j)
{
    if (pos.y > -200 && pos.y < 1300)
        if (pos.x > -200 && pos.x < 2200)
            put_essinde(all, pos, i, j);
    return 0;
}

int verif_screen_shamrodia(all_t *all, sfVector2f pos, int i, int j)
{
    if (pos.y > -200 && pos.y < 1300)
        if (pos.x > -200 && pos.x < 2200)
            put_shamrodia(all, pos, i, j);
    return 0;
}

int verif_screen_taverne(all_t *all, sfVector2f pos, int i, int j)
{
    if (pos.y > -200 && pos.y < 1300)
        if (pos.x > -200 && pos.x < 2200)
            put_taverne(all, pos, i, j);
    return 0;
}
