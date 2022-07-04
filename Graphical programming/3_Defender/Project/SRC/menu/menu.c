/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** menu
*/

#include "../../include/include.h"

void display_fond(all_t *all, sfRenderWindow *window)
{
    sfRenderWindow_drawSprite(window, all->menu->sprite_fond, NULL);
}

int menu(all_t *all, sfRenderWindow *window)
{
    sfRenderWindow_drawSprite(window, all->menu->sprite_fond, NULL);
    if (all->menu->menu1 == 1) {
        page_one(all, window);
    }
    if (all->menu->menu1 == 2)
        credit(all, window);
    if (all->menu->menu1 == 3)
        parameter(all, window);
    if (all->menu->menu1 == 4)
        sfRenderWindow_close(window);
    return 0;
}
