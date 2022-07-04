/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** hit_box.c
*/

#include "../../include/my_rpg.h"

int hit_box_one(all_t *all, sfVector2f pos, char c)
{
    if (c == ' ') {
        all->hit_box->hit_box_all[all->hit_box->hit_box].width = 0;
        all->hit_box->hit_box_all[all->hit_box->hit_box].height = 0;
    }
    if (c == '!') {
        all->hit_box->hit_box_all[all->hit_box->hit_box].width = pos.x + 96;
        all->hit_box->hit_box_all[all->hit_box->hit_box].height = pos.y + 96;
    }
    if (c == '"') {
        all->hit_box->hit_box_all[all->hit_box->hit_box].top = pos.y + 196;
        all->hit_box->hit_box_all[all->hit_box->hit_box].width = pos.x + 380;
        all->hit_box->hit_box_all[all->hit_box->hit_box].height = pos.y + 380;
    }
    return 0;
}

int hit_box_two(all_t *all, sfVector2f pos, char c)
{
    if (c == '$') {
        all->hit_box->hit_box_all[all->hit_box->hit_box].top = pos.y + 195;
        all->hit_box->hit_box_all[all->hit_box->hit_box].width = pos.x + 380;
        all->hit_box->hit_box_all[all->hit_box->hit_box].height = pos.y + 380;
    }
    if (c == '%') {
        all->hit_box->hit_box_all[all->hit_box->hit_box].top = pos.y + 194;
        all->hit_box->hit_box_all[all->hit_box->hit_box].width = pos.x + 380;
        all->hit_box->hit_box_all[all->hit_box->hit_box].height = pos.y + 380;
    }
    if (c == '&') {
        all->hit_box->hit_box_all[all->hit_box->hit_box].top = pos.y + 193;
        all->hit_box->hit_box_all[all->hit_box->hit_box].width = pos.x + 380;
        all->hit_box->hit_box_all[all->hit_box->hit_box].height = pos.y + 380;
    }
    return 0;
}

int hit_box_three(all_t *all, sfVector2f pos, char c)
{
    if (c == '(') {
        all->hit_box->hit_box_all[all->hit_box->hit_box].width = pos.x + 95;
        all->hit_box->hit_box_all[all->hit_box->hit_box].height = pos.y + 95;
    }
    if (c == ')') {
        all->hit_box->hit_box_all[all->hit_box->hit_box].left = pos.x - 30;
        all->hit_box->hit_box_all[all->hit_box->hit_box].width = pos.x + 37;
        all->hit_box->hit_box_all[all->hit_box->hit_box].height = pos.y + 97;
    }
    if (c == '*') {
        all->hit_box->hit_box_all[all->hit_box->hit_box].left = pos.x - 30;
        all->hit_box->hit_box_all[all->hit_box->hit_box].width = pos.x + 38;
        all->hit_box->hit_box_all[all->hit_box->hit_box].height = pos.y + 97;
    }
    return 0;
}

int hit_box_four(all_t *all, sfVector2f pos, char c)
{
    if (c == '+') {
        all->hit_box->hit_box_all[all->hit_box->hit_box].left = pos.x - 30;
        all->hit_box->hit_box_all[all->hit_box->hit_box].width = pos.x + 39;
        all->hit_box->hit_box_all[all->hit_box->hit_box].height = pos.y + 97;
    }
    if (c == ',') {
        all->hit_box->hit_box_all[all->hit_box->hit_box].left = pos.x - 30;
        all->hit_box->hit_box_all[all->hit_box->hit_box].width = pos.x + 40;
        all->hit_box->hit_box_all[all->hit_box->hit_box].height = pos.y + 97;
    }
    if (c == '-') {
        all->hit_box->hit_box_all[all->hit_box->hit_box].left = pos.x - 30;
        all->hit_box->hit_box_all[all->hit_box->hit_box].width = pos.x + 41;
        all->hit_box->hit_box_all[all->hit_box->hit_box].height = pos.y + 97;
    }
    return 0;
}

int hit_box_five(all_t *all, sfVector2f pos, char c)
{
    if (c == '.') {
        all->hit_box->hit_box_all[all->hit_box->hit_box].left = pos.x - 30;
        all->hit_box->hit_box_all[all->hit_box->hit_box].width = pos.x + 42;
        all->hit_box->hit_box_all[all->hit_box->hit_box].height = pos.y + 97;
    }
    if (c == '/') {
        all->hit_box->hit_box_all[all->hit_box->hit_box].width = pos.x + 98;
        all->hit_box->hit_box_all[all->hit_box->hit_box].height = pos.y + 98;
    }
    if (c == '0') {
        all->hit_box->hit_box_all[all->hit_box->hit_box].width = pos.x + 99;
        all->hit_box->hit_box_all[all->hit_box->hit_box].height = pos.y + 99;
    }
    return 0;
}