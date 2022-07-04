/*
** EPITECH PROJECT, 2021
** rpg
** File description:
** malloc_init.c
*/

#include "../../include/my_rpg.h"

void init_malloc(all_t *all)
{
    all->init->sprite55 = malloc(sizeof(sfIntRect) * 1601);
    all->init->sprite1025 = malloc(sizeof(sfIntRect) * 1601);
    all->init->sprite2020 = malloc(sizeof(sfIntRect) * 100);
    all->init->sprite510 = malloc(sizeof(sfIntRect) * 80);
    all->fight->rect_fond = malloc(sizeof(sfIntRect) * 10);
}
