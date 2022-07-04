/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** lunch_fight.c
*/

#include "../../include/my_rpg.h"
#include "../../include/macro.h"

void init_struct_ennemy(all_t *all, int enemy)
{
    if (enemy == PNJ)
        init_pnj(all);
    if (enemy == MOUMOUNE)
        init_moumoune(all);
    if (enemy == SLIME)
        init_slime(all);
    if (enemy == BOSS)
        init_boss(all);
}

static int lunch_fight_two(all_t *all, int enemy)
{
    if (all->game->colision_box.height - all->game->colision_box.top == 99) {
        enemy = SLIME;
        all->ennemy->type = MONSTER;
        all->ennemy->monster = SLIME_TO_DISPLAY;
    }
    if (all->game->colision_box.height - all->game->colision_box.top == 100) {
        enemy = BOSS;
        all->ennemy->type = MONSTER;
        all->ennemy->monster = BOSS_TO_DISPLAY;
    }
    return 0;
}

int lunch_fight(all_t *all)
{
    int enemy = 0;
    if (all->game->colision_box.height - all->game->colision_box.top == 97) {
        enemy = PNJ;
        all->ennemy->type = PNJ;
    }
    if (all->game->colision_box.height - all->game->colision_box.top == 98) {
        enemy = MOUMOUNE;
        all->ennemy->type = PNJ;
        all->ennemy->pnj = 0;
    }
    lunch_fight_two(all, enemy);
    init_struct_ennemy(all, enemy);
    all->menu->screen = FIGHT_SCREEN;
    return enemy;
}
