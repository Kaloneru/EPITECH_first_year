/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** is_on_hit_box.c
*/

#include "../../include/my_rpg.h"

int is_on_hit_box(all_t *all, sfVector2f pos_p)
{
    for (int i = 0; i != all->hit_box->hit_box - 1; i++) {
        if (pos_p.x + 56 >= all->hit_box->hit_box_all[i].left &&
            pos_p.x + 15 <= all->hit_box->hit_box_all[i].width &&
            pos_p.y + 90 >= all->hit_box->hit_box_all[i].top &&
            pos_p.y + 60 <= all->hit_box->hit_box_all[i].height) {
                all->game->colision_box.left =
                all->hit_box->hit_box_all[i].left;
                all->game->colision_box.top =
                all->hit_box->hit_box_all[i].top;
                all->game->colision_box.width =
                all->hit_box->hit_box_all[i].width;
                all->game->colision_box.height =
                all->hit_box->hit_box_all[i].height;
                return 1;
            }
    }
    return 0;
}