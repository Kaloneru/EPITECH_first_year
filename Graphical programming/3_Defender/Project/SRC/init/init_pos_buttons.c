/*
** EPITECH PROJECT, 2022
** init_pos_buttons.c
** File description:
** initiate the positions of the menu's bottons'
*/
#include "../../include/include.h"

static void pos_buttons_two(all_t *all, sfVector2f pos)
{
    all->menu->hit_box_pos[3].left = pos.x;
    all->menu->hit_box_pos[3].top = pos.y + 400;
    all->menu->hit_box_pos[3].width = pos.x + 250;
    all->menu->hit_box_pos[3].height = pos.y + 55 + 400;
    all->menu->hit_box_pos[4].left = pos.x + 500;
    all->menu->hit_box_pos[4].top = pos.y + 400;
    all->menu->hit_box_pos[4].width = pos.x + 250 + 500;
    all->menu->hit_box_pos[4].height = pos.y + 55 + 400;
    all->menu->hit_box_pos[5].left = 1500;
    all->menu->hit_box_pos[5].top = 500;
    all->menu->hit_box_pos[5].width = 1750;
    all->menu->hit_box_pos[5].height = 550;
}

static void pos_buttons_one(all_t *all, sfVector2f pos)
{
    all->menu->hit_box_pos[0].left = pos.x;
    all->menu->hit_box_pos[0].top = pos.y;
    all->menu->hit_box_pos[0].width = pos.x + 250;
    all->menu->hit_box_pos[0].height = pos.y + 55;
    all->menu->hit_box_pos[1].left = pos.x + 500;
    all->menu->hit_box_pos[1].top = pos.y;
    all->menu->hit_box_pos[1].width = pos.x + 250 + 500;
    all->menu->hit_box_pos[1].height = pos.y + 55;
    all->menu->hit_box_pos[2].left = pos.x + 200;
    all->menu->hit_box_pos[2].top = pos.y + 400;
    all->menu->hit_box_pos[2].width = pos.x + 250 + 200;
    all->menu->hit_box_pos[2].height = pos.y + 55 + 400;
}

void init_pos_buttons(all_t *all)
{
    sfVector2f pos = {600, 300};
    all->menu->hit_box_pos = malloc(sizeof(sfIntRect) * 100);
    sfSprite_setPosition(all->menu->button, pos);
    pos_buttons_one(all, pos);
    pos_buttons_two(all, pos);
}
