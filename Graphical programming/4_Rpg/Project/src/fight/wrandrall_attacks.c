/*
** EPITECH PROJECT, 2022
** wrandrall_attack.c
** File description:
** deal with the attacks of wrandrall
*/
#include "../../include/my_rpg.h"
#include "../../include/macro.h"

void consequences_of_attack(all_t *all)
{
    sfVector2f pos = {450, 725};
    if (all->menu->screen == DESCRIPTION_VERTICAL &&
    all->wrandrall->stamina_left <
    all->wrandrall->nb_use_attacks[COUP_VERTICAL])
        display_not_enouth_stamina(all);
    else if (all->menu->screen == DESCRIPTION_VERTICAL) {
        display_text_bar1(all, CONSEQUENCES_VERTICAL);
        print_text_real_size(all, pos,
        all->wrandrall->attacks_description[COUP_VERTICAL], 50);
    }
    if (all->menu->screen == DESCRIPTION_TELEPORTRATON &&
    all->wrandrall->stamina_left <
    all->wrandrall->nb_use_attacks[TELEPORTATION])
        display_not_enouth_mana(all);
    else if (all->menu->screen == DESCRIPTION_TELEPORTRATON) {
        display_text_bar1(all, CONSEQUENCES_TELEPORTATION);
        print_text_real_size(all, pos,
        all->wrandrall->attacks_description[TELEPORTATION], 50);
    }
    if (all->menu->screen == DESCRIPTION_FUITE &&
    all->wrandrall->stamina_left <
    all->wrandrall->nb_use_attacks[TENTATIVE_DE_FUITE])
        display_not_enouth_stamina(all);
    else if (all->menu->screen == DESCRIPTION_FUITE) {
        display_text_bar1(all, CONSEQUENCES_FUITE);
        print_text_real_size(all, pos,
        all->wrandrall->attacks_description[TENTATIVE_DE_FUITE], 50);
    }
    if (all->menu->screen == DESCRIPTION_SATANAS &&
    all->wrandrall->stamina_left <
    all->wrandrall->nb_use_attacks[VEDI_RETRO_SATANAS])
        display_not_enouth_stamina(all);
    else if (all->menu->screen == DESCRIPTION_SATANAS) {
        display_text_bar1(all, CONSEQUENCES_SATANAS);
        print_text_real_size(all, pos,
        all->wrandrall->attacks_description[VEDI_RETRO_SATANAS], 50);
    }
}

void consequence_of_chosen_attack(all_t *all)
{
    sfVector2f pos = {450, 725};

    if (all->menu->screen == CONSEQUENCES_VERTICAL) {
        display_text_bar2(all, ENNEMY_TURN);
        print_text_real_size(all, pos,
        "l'ennemi prend cher(e),\ncelui ci perd 8 de vie", 50);
        if (all->menu->screen_before == DESCRIPTION_VERTICAL) {
            all->wrandrall->stamina_left -= 10;
            all->ennemy->life_left -=
            all->wrandrall->attacks_damages[COUP_VERTICAL] +
            1 * all->wrandrall->lvl;
        }
    }
    if (all->menu->screen == CONSEQUENCES_TELEPORTATION) {
        display_text_bar2(all, ENNEMY_TURN);
        print_text_real_size(all, pos,
        "l'ennemi se tord un orteil et a mal,\ncelui ci perd 10 de vie", 50);
        if (all->menu->screen_before == DESCRIPTION_TELEPORTRATON) {
            all->wrandrall->mana -= 20;
        }
    }
    if (all->menu->screen == CONSEQUENCES_FUITE) {
        display_text_bar2(all, ENNEMY_TURN);
        print_text_real_size(all, pos,
        "vous vous faite mal...reflechissez un peu...,\nvous perdez 2 de vie",
        50);
        if (all->menu->screen_before == DESCRIPTION_FUITE ) {
            all->wrandrall->stamina_left -= 2;
            all->wrandrall->lifepoint_left -=
            all->wrandrall->attacks_damages[TENTATIVE_DE_FUITE] + 1 *
            all->wrandrall->lvl;
            all->wrandrall->dodge_chance++;
            all->ennemy->life_left -=
            all->wrandrall->attacks_damages[TELEPORTATION] + 1 *
            all->wrandrall->lvl;
        }
    }
    if (all->menu->screen == CONSEQUENCES_SATANAS ) {
        display_text_bar2(all, ENNEMY_TURN);
        print_text_real_size(all, pos,
        "l'ennemi fait dans sa culotte,\ncelui ci perd 15 de vie", 50);
        if (all->menu->screen_before == DESCRIPTION_SATANAS) {
            all->wrandrall->stamina_left -= 20;
            all->ennemy->life_left -=
            all->wrandrall->attacks_damages[VEDI_RETRO_SATANAS] + 1 *
            all->wrandrall->lvl;
        }
    }
}
