/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** put_enemi
*/

#include "../../include/include.h"

void init_wave(all_t *all)
{
    all->enemi->all_pos = malloc(sizeof(sfVector2f) * 51);
    all->enemi->enemi = malloc(sizeof(int) * 51);
    all->enemi->health = malloc(sizeof(int) * 51);
    all->enemi->hit_box = malloc(sizeof(sfIntRect) * 51);
    all->enemi->v = malloc(sizeof(int) * 51);
    all->enemi->moov = 1;

    for (int i = 0; i != 50; i++) {
        all->enemi->all_pos[i].x = 0 - 100 * i;
        all->enemi->all_pos[i].y = 500;
        all->enemi->enemi[i] = all->enemi->wave;
        all->enemi->health[i] = 100;
        all->enemi->hit_box[i].left = all->enemi->all_pos->x;
        all->enemi->hit_box[i].top = all->enemi->all_pos->y;
        all->enemi->hit_box[i].width = 100;
        all->enemi->hit_box[i].height = 100;
        all->enemi->v[i] = 0;
        all->enemi->annimation[i] = i % 4 + (all->enemi->wave * 4);
    }
}
