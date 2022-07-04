/*
** EPITECH PROJECT, 2022
** ennemy_turn.c
** File description:
** the turn of an ennmy
*/
#include <time.h>
#include "../../include/my_rpg.h"
#include "../../include/macro.h"

void attack_ennemy(all_t *all, int random)
{
    sfVector2f pos_text1 = {450, 725};
    sfVector2f pos_name = {440, 785};

    display_text_bar1(all, ENEMY_MESSAGE);
    print_text_real_size(all, pos_text1, "l'ennemi(e) utilise :", 50);
    print_text_real_size(all, pos_name,
    all->ennemy->attacks_names[random], 50);
}

void attack_ennemy2(all_t *all)
{
    sfVector2f pos_text1 = {450, 725};
    sfVector2f pos_text2 = {800, 725};
    sfVector2f pos_damage = {700, 725};

    display_text_bar2(all, FIGHT_SCREEN);
    print_text_real_size(all, pos_text1, "vous perdez", 50);
    print_text_real_size(all, pos_damage, int_to_str(all->ennemy->bobo), 50);
    print_text_real_size(all, pos_text2, "de vie", 50);
    if (all->menu->screen_before == ENNEMY_TURN)  {
        all->wrandrall->lifepoint_left -= all->ennemy->bobo;
        if (all->wrandrall->lifepoint_left < 0)
            all->wrandrall->lifepoint_left = 0;
    }
}

void ennemy(all_t *all)
{
    time_t t;

    srand((unsigned) time(&t));
    if (all->menu->screen_before < 40) {
        all->ennemy->random = rand() % my_arrlen(all->ennemy->attacks_names);
        all->ennemy->bobo = all->ennemy->damage[all->ennemy->random];
    }
    if (all->menu->screen == ENNEMY_TURN) {
        attack_ennemy(all, all->ennemy->random);
    }
}
