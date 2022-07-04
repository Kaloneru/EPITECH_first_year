/*
** EPITECH PROJECT, 2022
** parralax.c
** File description:
** desc
*/

#include "../../include/my_rpg.h"

int parralax(all_t *all)
{
    sfSprite_setPosition(all->menu->forest, all->menu->pos_fond);
    sfRenderWindow_drawSprite(all->window->window, all->menu->forest,
    NULL);
    sfSprite_setPosition(all->menu->forest_two, all->menu->pos_forest_two);
    sfRenderWindow_drawSprite(all->window->window, all->menu->forest_two,
    NULL);
    all->menu->pos_fond.x -= 3;
    if (all->menu->pos_fond.x <= (-2000))
        all->menu->pos_fond.x = 1920;
    all->menu->pos_forest_two.x -= 3;
    if (all->menu->pos_forest_two.x <= (-2000))
        all->menu->pos_forest_two.x = 1920;
    return 0;
}
