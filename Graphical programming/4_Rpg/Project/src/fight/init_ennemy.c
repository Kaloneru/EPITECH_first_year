/*
** EPITECH PROJECT, 2022
** init_ennemy.c
** File description:
** init the ennemy struct
*/
#include "../../include/macro.h"
#include "../../include/my_rpg.h"

int my_arrlen(char **array)
{
    int i = 0;

    for (; array[i] != NULL; i++);
    return i;
}

void init_ennemy_first_part(all_t *all, int life, char *name)
{
    all->ennemy->life = life;
    all->ennemy->life_left = life;
    all->ennemy->name = name;
}

void init_enemy_second_part(all_t *all, char *attacks, char *damage)
{
    char **damage_arr = my_str_to_word_array(damage, ',');
    all->ennemy->attacks_names = my_str_to_word_array(attacks, ',');
    all->ennemy->damage = malloc(sizeof(int *) * my_arrlen(damage_arr));
    for (int i = 0; damage_arr[i] != NULL; i++) {
        all->ennemy->damage[i] = atoi(damage_arr[i]);
    }
}
