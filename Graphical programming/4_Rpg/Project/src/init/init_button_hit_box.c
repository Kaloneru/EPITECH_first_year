/*
** EPITECH PROJECT, 2022
** init_button_hit_box.c
** File description:
** init the hit box of all the menu's buttons
*/

#include "../../include/my_rpg.h"
#include "../../include/macro.h"

void pos_buttons(all_t *all, sfVector2f pos, int num_button)
{
    all->menu->hit_box_pos[num_button].left = pos.x;
    all->menu->hit_box_pos[num_button].top = pos.y;
    all->menu->hit_box_pos[num_button].width = pos.x + 150;
    all->menu->hit_box_pos[num_button].height = pos.y + 75;
}

void pos_buttons_fight(all_t *all, sfVector2f pos, int num_button)
{
    all->menu->hit_box_pos[num_button].left = pos.x;
    all->menu->hit_box_pos[num_button].top = pos.y;
    all->menu->hit_box_pos[num_button].width = pos.x + 250;
    all->menu->hit_box_pos[num_button].height = pos.y + 125;
}

void pos_button_text(all_t *all, sfVector2f pos, int num_button)
{
    all->menu->hit_box_pos[num_button].left = pos.x;
    all->menu->hit_box_pos[num_button].top = pos.y;
    all->menu->hit_box_pos[num_button].width = pos.x + 1225;
    all->menu->hit_box_pos[num_button].height = pos.y + 360;
}

void init_pos_buttons(all_t *all)
{
    all->menu->hit_box_pos = malloc(sizeof(sfIntRect) * 50);
    sfVector2f pos_menu_back = {100, 700};
    sfVector2f pos_button_attack_in_fight = {1500, 150};
    sfVector2f pos_button_sacoche = {1500, 375};
    sfVector2f pos_button_run_away_in_fight = {1500, 600};
    sfVector2f pos_coup_vertical = {50, 50};
    sfVector2f pos_teleportation = {50, 250};
    sfVector2f pos_fuite = {50, 450};
    sfVector2f pos_satanas = {50, 650};
    sfVector2f pos_continue1 = {1600, 800};
    sfVector2f pos_continue2 = {25, 800};
    pos_buttons(all, pos_menu_back, 5);
    pos_buttons_fight(all, pos_button_attack_in_fight, ATTACK);
    pos_buttons_fight(all, pos_button_sacoche, SACOCHE);
    pos_buttons_fight(all, pos_button_run_away_in_fight, RUN_AWAY);
    pos_buttons_fight(all, pos_coup_vertical, BUTTON_COUP_VERTICAL);
    pos_buttons_fight(all, pos_teleportation, BUTTON_TELEPORTATION);
    pos_buttons_fight(all, pos_fuite, BUTTON_FUITE);
    pos_buttons_fight(all, pos_satanas, BUTTON_SATANAS);
    pos_buttons_fight(all, pos_continue1, BUTTON_CONTINUE1);
    pos_buttons_fight(all, pos_continue2, BUTTON_CONTINUE2);
}
