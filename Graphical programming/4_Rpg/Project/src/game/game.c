/*
** EPITECH PROJECT, 2021
** rpg
** File description:
** game.c
*/

#include <math.h>
#include "../../include/my_rpg.h"

int update_XP(all_t *all)
{
    while (all->wrandrall->exp_needed_for_next_level >= 10 * pow(1.4,
    all->wrandrall->lvl)) {
        all->wrandrall->exp_needed_for_next_level -= 10 *
        pow(1.4, all->wrandrall->lvl);
        all->wrandrall->lvl++;
    }
    return 0;
}

int game(all_t *all)
{
    display_screen(all);
    moov(all);
    display_inventory(all);
    menu_pause(all);
    update_XP(all);
    return 0;
}
