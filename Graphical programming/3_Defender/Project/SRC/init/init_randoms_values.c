/*
** EPITECH PROJECT, 2022
** init_randoms_values.c
** File description:
** init some values
*/
#include "../../include/include.h"

void init_tour_rect(all_t *all)
{
    init_tour_rect_one(all);
    init_tour_rect_two(all);
    all->map->castle.left = 0;
    all->map->castle.top = 100;
    all->map->castle.width = 200;
    all->map->castle.height = 200;
}

sfSprite *get_sprite(sfTexture* texture)
{
    sfSprite *sprite = sfSprite_create();

    sfSprite_setTexture(sprite, texture, sfTrue);
    return sprite;
}

void init_button_rect(all_t *all)
{
    int x = 0;
    int y = 0;
    int i = 0;

    while (y != 3) {
        if (x == 6) {
            x = 0;
            y++;
        }
        all->menu->button_rect[i].left = 100 * x;
        all->menu->button_rect[i].top = 25 * y;
        all->menu->button_rect[i].width = 99;
        all->menu->button_rect[i].height = 25 * y + 24;
        i++;
        x++;
    }
}
