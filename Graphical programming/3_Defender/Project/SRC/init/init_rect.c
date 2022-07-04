/*
** EPITECH PROJECT, 2022
** init_rect.c
** File description:
** init some rect idk why
*/
#include "../../include/include.h"

void init_map_rect(all_t *all)
{
    int x = 0;
    int y = 0;
    int i = 0;

    while (y != 10) {
        if (x == 20) {
            x = 0;
            y++;
        }
        all->map->map_rect[i].left = 100 * x;
        all->map->map_rect[i].top = 100 * y;
        all->map->map_rect[i].width = 100 * x + 99;
        all->map->map_rect[i].height = 100 * y + 99;
        all->map->tour_on_rect[i] = 0;
        all->map->type_tour[i] = 0;
        i++;
        x++;
    }
}

void init_background_rect(all_t *all)
{
    int x = 0;
    int y = 0;
    int i = 0;

    while (y != 3) {
        if (x == 12) {
            x = 0;
            y++;
        }
        all->sprite->sprite_rect[i].left = 50 * x;
        all->sprite->sprite_rect[i].top = 50 * y;
        all->sprite->sprite_rect[i].width = 49;
        all->sprite->sprite_rect[i].height = 49;
        i++;
        x++;
    }
}

void init_sound_rect(all_t *all)
{
    int x = 0;
    int y = 0;
    int i = 0;

    while (y != 3) {
        if (x == 5) {
            x = 0;
            y++;
        }
        all->sound->rect_sprite_volume[i].left = 200 * x;
        all->sound->rect_sprite_volume[i].top = 200 * y;
        all->sound->rect_sprite_volume[i].width = 199;
        all->sound->rect_sprite_volume[i].height = 199;
        i++;
        x++;
    }
}

void init_tour_rect_two(all_t *all)
{
    all->map->tour_rect[3].left = 750;
    all->map->tour_rect[3].top = 0;
    all->map->tour_rect[3].width = 200;
    all->map->tour_rect[3].height = 300;
    all->map->tour_rect[4].left = 0;
    all->map->tour_rect[4].top = 0;
    all->map->tour_rect[4].width = 100;
    all->map->tour_rect[4].height = 300;
    all->map->tour_rect[5].left = 0;
    all->map->tour_rect[5].top = 300;
    all->map->tour_rect[5].width = 300;
    all->map->tour_rect[5].height = 400;
}

void init_tour_rect_one(all_t *all)
{
    all->map->tour_rect[0].left = 100;
    all->map->tour_rect[0].top = 0;
    all->map->tour_rect[0].width = 200;
    all->map->tour_rect[0].height = 300;
    all->map->tour_rect[1].left = 300;
    all->map->tour_rect[1].top = 0;
    all->map->tour_rect[1].width = 200;
    all->map->tour_rect[1].height = 300;
    all->map->tour_rect[2].left = 550;
    all->map->tour_rect[2].top = 0;
    all->map->tour_rect[2].width = 200;
    all->map->tour_rect[2].height = 300;
}
