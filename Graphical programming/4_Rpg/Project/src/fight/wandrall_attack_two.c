/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** wandrall_attack_two.c
*/

#include "../../include/my_rpg.h"
#include "../../include/macro.h"

int display_button_attack(all_t *all)
{
    sfVector2f pos_attack_button = {1500, 150};
    sfVector2f pos_run_away_button = {1500, 600};
    sfVector2f pos_sacoche = {1500, 375};
    sfVector2f pos_text_attack = {1540, 230};
    sfVector2f pos_text_run = {1540, 680};
    sfVector2f pos_text_inventary = {1540, 450};
    sfSprite_setScale(all->sheet->button, all->scale->scale4);
    display_button(all, pos_sacoche, 45, SACOCHE);
    display_button(all, pos_attack_button, 31, ATTACK);
    display_button(all, pos_run_away_button , 10, RUN_AWAY);
    print_text_real_size(all, pos_text_inventary, "sacoche", 50);
    print_text_real_size(all, pos_text_attack, "attaques", 50);
    print_text_real_size(all, pos_text_run, "fuite", 50);
    return 0;
}

int display_buttons_attacks(all_t *all)
{
    sfVector2f pos_coup_vertical = {50, 50};
    sfVector2f pos_teleportation = {50, 250};
    sfVector2f pos_fuite = {50, 450};
    sfVector2f pos_satanas = {50, 650};
    display_button(all, pos_coup_vertical, BUTTON_COUP_VERTICAL,
    BUTTON_COUP_VERTICAL);
    display_button(all, pos_teleportation, BUTTON_TELEPORTATION,
    BUTTON_TELEPORTATION);
    display_button(all, pos_fuite,  BUTTON_FUITE, BUTTON_FUITE);
    display_button(all, pos_satanas, BUTTON_SATANAS, BUTTON_SATANAS);
    return 0;
}

int display_attacks_names(all_t *all)
{
    sfVector2f pos_coup_vertical = {95, 135};
    sfVector2f pos_teleportation = {95, 335};
    sfVector2f pos_fuite = {95, 535};
    sfVector2f pos_satanas = {95, 735};
    print_text_real_size(all, pos_coup_vertical, "coup vertical", 30);
    print_text_real_size(all, pos_teleportation, "teleportation", 30);
    print_text_real_size(all, pos_fuite, "fuite", 30);
    print_text_real_size(all, pos_satanas, "satanas", 30);
    return 0;
}
