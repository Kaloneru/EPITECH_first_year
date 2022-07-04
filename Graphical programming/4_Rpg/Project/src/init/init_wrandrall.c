/*
** EPITECH PROJECT, 2022
** init_wrandrall.c
** File description:
** initiaisation of wrandrall
*/

#include "../../include/my_rpg.h"
#include "../../include/macro.h"

static void init_lifepoint_and_mana(all_t *all)
{
    all->wrandrall->lifepoint = 50;
    all->wrandrall->lifepoint_left = 50;
    all->wrandrall->mana = 50;
    all->wrandrall->mana_left = 50;
    all->wrandrall->stamina = 50;
    all->wrandrall->stamina_left = 50;
    all->wrandrall->dodge_chance = 0;
    all->wrandrall->lvl = 1;
    all->wrandrall->exp_needed_for_next_level = 0;
}

static void malloc_struct_wrandrall(all_t *all)
{
    all->wrandrall->attacks = malloc(40);
    all->wrandrall->attacks_description = malloc(150);
    all->wrandrall->attacks_damages = malloc(sizeof(int) * 5);
    all->wrandrall->nb_use_attacks = malloc(20);
}

static void init_attack_description(all_t *all)
{
    all->wrandrall->attacks_description = mem_alloc_2d_char_array(5, 500);
    all->wrandrall->attacks_description[COUP_VERTICAL] =
    "vous portez un coup vertical de haut en bas. \nvous perdez 10 de stamina";
    all->wrandrall->attacks_description[TELEPORTATION] =
    "vous vous teleportez sur l'enemie et lui tombez\ndessus lui\
    un gros bobo.\
    \nvous vous reteleportez ensuite a votre lieu de \ndepart.\
    vous perdez 20 de mana";
    all->wrandrall->attacks_description[TENTATIVE_DE_FUITE] =
    "vous avez peur et essayez de fuire mais vous \ntombez et vous faite mal.\
    neanmoint, vos chances\
    \nd'esquive augmentent. vous perdez 2 de stamina\n";
    all->wrandrall->attacks_description[VEDI_RETRO_SATANAS] =
    "vous racontez vos origines demoniaques a votre \nadversaire\
    qui a tres peur. \nvous perdez\
    25 de stamina";
}

static void init_attack(all_t *all)
{
    all->wrandrall->attacks[COUP_VERTICAL] = "coup vertical";
    all->wrandrall->attacks[TELEPORTATION] = "teleportation";
    all->wrandrall->attacks[TENTATIVE_DE_FUITE] = "tentative de fuite";
    all->wrandrall->attacks[VEDI_RETRO_SATANAS] = "vedi retro satanas";
}

static void init_attacks_damage(all_t *all)
{
    all->wrandrall->attacks_damages[COUP_VERTICAL] = 8;
    all->wrandrall->attacks_damages[TELEPORTATION] = 10;
    all->wrandrall->attacks_damages[TENTATIVE_DE_FUITE] = 2;
    all->wrandrall->attacks_damages[VEDI_RETRO_SATANAS] = 15;
}

static void init_needed_to_use_attacks(all_t *all)
{
    all->wrandrall->nb_use_attacks = malloc(sizeof(int *) * 5);
    all->wrandrall->nb_use_attacks[COUP_VERTICAL] = 10;
    all->wrandrall->nb_use_attacks[TELEPORTATION] = 20;
    all->wrandrall->nb_use_attacks[TENTATIVE_DE_FUITE] = 2;
    all->wrandrall->nb_use_attacks[VEDI_RETRO_SATANAS] = 25;
}

int init_wrandrall(all_t *all)
{
    init_lifepoint_and_mana(all);
    malloc_struct_wrandrall(all);
    init_attack_description(all);
    init_attack(all);
    init_attacks_damage(all);
    init_needed_to_use_attacks(all);
    return 0;
}
