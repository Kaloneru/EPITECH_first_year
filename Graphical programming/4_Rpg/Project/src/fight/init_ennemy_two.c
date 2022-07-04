/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** init_ennemy_two.c
*/

#include "../../include/my_rpg.h"

void init_slime(all_t *all)
{
    char *damage = "5,5,5";
    char *attacks = "blob,blob blob,blob blob blob";
    init_ennemy_first_part(all, 25, "slime");
    init_enemy_second_part(all, attacks, damage);
}

void init_boss(all_t *all)
{
    char *damage = "17,20,23";
    char *attacks =
    "morsure qui pique,morsure qui fait mal,morsure qui fait giga mal";
    init_ennemy_first_part(all, 75, "boss");
    init_enemy_second_part(all, attacks, damage);
}

void init_pnj(all_t *all)
{
    char *damage = "5,7";
    char *attacks = "caca culote, lance chaussure";
    init_ennemy_first_part(all, 10, "pnj");
    init_enemy_second_part(all, attacks, damage);
    if (all->game->colision_box.width - all->game->colision_box.left == 67)
        all->ennemy->pnj = 2;
    if (all->game->colision_box.width - all->game->colision_box.left == 68)
        all->ennemy->pnj = 3;
    if (all->game->colision_box.width - all->game->colision_box.left == 69)
        all->ennemy->pnj = 4;
    if (all->game->colision_box.width - all->game->colision_box.left == 70)
        all->ennemy->pnj = 5;
    if (all->game->colision_box.width - all->game->colision_box.left == 71)
        all->ennemy->pnj = 6;
    if (all->game->colision_box.width - all->game->colision_box.left == 72)
        all->ennemy->pnj = 7;
}

void init_moumoune(all_t *all)
{
    char *damage = "100,100,100";
    char *attacks = "coup de poele, moumoune kick, moumoune puch";
    init_ennemy_first_part(all, 500, "moumoune");
    init_enemy_second_part(all, attacks, damage);
}
