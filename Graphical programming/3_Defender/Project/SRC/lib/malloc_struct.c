/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** malloc structur
*/

#include "../../include/include.h"

all_t *malloc_struct(all_t *all)
{
    all->sound = malloc(sizeof(sound_t));
    all->map = malloc(sizeof(map_t));
    all->global_values = malloc(sizeof(global_values_t));
    all->menu = malloc(sizeof(menu_t));
    all->sprite = malloc(sizeof(sprite_t));
    all->credit = malloc(sizeof(credit_t));
    all->enemi = malloc(sizeof(enemi_t));
    all->rect_menu = malloc(sizeof(rect_menu_t));
    return all;
}
