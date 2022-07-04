/*
** EPITECH PROJECT, 2022
** rpg lib
** File description:
** malloc_struct
*/

#include "../../include/my_rpg.h"

static void malloc_two(all_t *all)
{
    all->hit_box = malloc(sizeof(hit_box_t));
    all->wrandrall = malloc(sizeof(wrandrall_t));
    all->fight = malloc(sizeof(fight_t));
    all->home = malloc(sizeof(home_t));
    all->essinde = malloc(sizeof(essinde_t));
    all->shamrodia = malloc(sizeof(shamrodia_t));
    all->taverne = malloc(sizeof(taverne_t));
    all->ennemy = malloc(sizeof(ennemy_t));
}

void malloc_struct(all_t *all)
{
    all->game = malloc(sizeof(game_t));
    all->init = malloc(sizeof(init_all_t));
    all->menu = malloc(sizeof(menu_t));
    all->npc = malloc(sizeof(npc_t));
    all->window = malloc(sizeof(window_t));
    all->texts = malloc(sizeof(texts_t));
    all->sheet = malloc(sizeof(sheet_t));
    all->obj = malloc(sizeof(obj_t));
    all->credit = malloc(sizeof(credit_t));
    all->sound = malloc(sizeof(sound_t));
    all->glbv = malloc(sizeof(globale_value_t));
    all->scale = malloc(sizeof(scale_t));
    malloc_two(all);
}
