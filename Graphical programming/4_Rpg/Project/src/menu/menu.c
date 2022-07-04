/*
** EPITECH PROJECT, 2022
** my_rpg
** File description:
** menu
*/

#include "../../include/my_rpg.h"

int show_background(all_t *all)
{
    sfSprite_setPosition(all->menu->sprite_background,
    all->menu->pos_background);
    sfRenderWindow_drawSprite(all->window->window,
    all->menu->sprite_background, NULL);
    return 0;
}

int menu(all_t *all)
{
    parralax(all);
    show_background(all);

    if (all->menu->screen == 1)
        page_one(all);
    if (all->menu->screen == 2)
        parameter(all);
    if (all->menu->screen == 3)
        credit(all);
    if (all->menu->screen == 4)
        sfRenderWindow_close(all->window->window);
    if (all->menu->screen == 5)
        how_to_play(all);
    return 0;
}
