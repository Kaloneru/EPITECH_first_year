/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** put_tour
*/

#include "../../include/include.h"

void put_tour(all_t *all, sfRenderWindow *window)
{
    int i = 0;

    while (i != all->map->nb_tour) {
        if (all->map->type_tour[i] <= 5) {
            sfSprite_setPosition(all->map->build, all->map->tour_pos[i]);
            set_and_draw
                (all->map->build,
                 all->map->tour_rect[all->map->type_tour[i]], window);
        } else {
            sfSprite_setPosition(all->sprite->sprite, all->map->tour_pos[i]);
            set_and_draw
                (all->sprite->sprite, all->sprite->sprite_rect[20], window);
        }
        i++;
    }
}
