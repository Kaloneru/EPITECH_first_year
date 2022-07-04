/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** put_enemi
*/

#include "../../include/include.h"

void put_enemi(all_t *all, sfRenderWindow *window)
{
    int i = 0;

    while (i != 50) {
        if (all->enemi->health[i] > 0) {
            sfSprite_setPosition(all->sprite->sprite, all->enemi->all_pos[i]);
            set_and_draw(all->sprite->sprite,
                         all->sprite->sprite_rect[all->enemi->annimation[i]],
                         window);
            all->enemi->annimation[i] += all->enemi->moov;
            all->enemi->annimation[i] =
                all->enemi->annimation[i] % 4 + (all->enemi->wave * 4);
        }
        i++;
    }
}
