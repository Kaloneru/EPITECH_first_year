/*
** EPITECH PROJECT, 2022
** init.c
** File description:
** malloc a struct
*/
#include "include/include.h"

void malloc_struct(all_t *all)
{
    all->all_form = malloc(sizeof(all_form_t));
    all->cur_form = malloc(sizeof(cur_form_t));
    all->map = malloc(sizeof(map_t));
    all->parameter = malloc(sizeof(parameter_t));
}
