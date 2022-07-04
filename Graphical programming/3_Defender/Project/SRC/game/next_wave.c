/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** next_wave
*/

#include "../../include/include.h"

void reinnit_wave(all_t *all)
{
    int i = 0;
    if (all->enemi->wave < 2)
        all->enemi->wave++;
    while (i != 50) {
        all->enemi->all_pos[i].x = 0 - 100 * i;
        all->enemi->all_pos[i].y = 500;
        all->enemi->enemi[i] = all->enemi->wave;
        all->enemi->health[i] = 100;
        all->enemi->v[i] = 0;
        all->enemi->annimation[i] = i % 4 + (all->enemi->enemi[i] * 4);
        i++;
    }
}

int all_ennemi_is_dead(all_t *all)
{
    int i = 0;

    while (i != 50) {
        if (all->enemi->health[i] > 0)
            return 1;
        i++;
    }
    all->enemi->moov = 0;
    return 0;
}

void next_wave(all_t *all)
{
    if (all_ennemi_is_dead(all) == 0 && sfMouse_isButtonPressed(sfMouseLeft)) {
        reinnit_wave(all);
        all->global_values->money += 10;
        all->enemi->moov = 1;
    }
}
