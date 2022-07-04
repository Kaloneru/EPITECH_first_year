/*
** EPITECH PROJECT, 2022
** fight.c
** File description:
** the fight
*/
#include "../../include/my_rpg.h"
#include "../../include/macro.h"

int verif_win(all_t *all)
{
    if (all->ennemy->life_left <= 0) {
        all->menu->screen = 46;
        return 0;
    }
    else if (all->wrandrall->lifepoint_left <= 0) {
        all->menu->screen = 47;
        return -1;
    }
    return 1;
}

void display_win(all_t *all)
{
    sfVector2f pos = {450, 725};

    display_text_bar1(all, GAME_SCREEN);
    print_text_real_size(all, pos,
    "BRAVO, vous avez remporter ce combat\nc'etait d'ailleur\
    un tres beau combat\nvous gagnez 5 piecesde bronzes et\
    20 exp,\npeut etre avez vous monter de niveau ?",
    50);
    if (all->menu->screen_before != WIN) {
        all->wrandrall->exp_needed_for_next_level += 20;
        all->game->money += 5;
    }
}

void display_lose(all_t *all)
{
    sfVector2f pos = {450, 725};
    display_text_bar1(all, GAME_SCREEN);
    print_text_real_size(all, pos,
    "quel dommage, vous avez perdu. \nvous perdez 5 pieces de bronzes et ne\
    \ngagnez pas d'exp.",
    50);
    if (all->menu->screen_before != LOSE)
        all->game->money -= 5;
}

int display_attacks(all_t *all)
{
    sfVector2f pos_continue = {1600, 800};
    sfVector2f pos_button_continue = {1640, 880};

    if (all->menu->screen == FIGHT_SCREEN && verif_win(all) == 0)
        display_win(all);
    if (all->menu->screen == FIGHT_SCREEN && verif_win(all) == -1)
        display_lose(all);
    if (all->menu->screen == 47)
        display_lose(all);
    if (all->menu->screen == 46)
        display_win(all);
    if (all->menu->screen < WIN) {
        if (all->menu->screen == FIGHT_SCREEN)
            display_button_attack(all);
        if (all->menu->screen == MENU_ATTACK) {
            display_buttons_attacks(all);
            display_attacks_names(all);
            display_buttons_attacks(all);
            display_attacks_names(all);
        }
        if (all->menu->screen > MENU_ATTACK) {
            consequences_of_attack(all);
            consequence_of_chosen_attack(all);
        }
        if (all->menu->screen == ENNEMY_TURN) {
            ennemy(all);
        }
        if (all->menu->screen == ENEMY_MESSAGE) {
            attack_ennemy2(all);
        }
        if (all->menu->screen == INVENTARY) {
            all->glbv->display_inventory = 1;
            display_inventory(all);
            display_button(all, pos_continue, FIGHT_SCREEN, BUTTON_CONTINUE1);
            print_text_real_size(all, pos_button_continue, "continue", 30);
        }
    }
    return 0;
}

int fight(all_t *all, int fond)
{
    sfSprite_setScale(all->sheet->button, all->scale->scale4);
    sfSprite_setScale(all->sheet->players, all->scale->scale4);
    display_fond(all, fond);
    display_enemy(all);
    display_wrandrall(all);
    display_attacks(all);
    all->glbv->display_inventory = 0;
    sfSprite_setScale(all->sheet->players, all->scale->scale2);
    sfSprite_setScale(all->sheet->button, all->scale->scale3);
    return 0;
}
