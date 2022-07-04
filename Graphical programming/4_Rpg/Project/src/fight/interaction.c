/*
** EPITECH PROJECT, 2022
** interaction.c
** File description:
** all the interactions between you and your ennemy
*/
#include "../../include/my_rpg.h"
#include "../../include/macro.h"

void display_not_enouth_stamina(all_t *all)
{
    sfVector2f pos = {300, 500};
    sfVector2f pos_continue = {1600, 800};
    sfVector2f pos_button_continue = {1640, 880};
    sfVector2f pos_message = {540, 780};

    sfSprite_setScale(all->sheet->button, all->scale->scale5);
    set_and_draw_pos(all->sheet->button, all->init->sprite1025[0],
    all->window->window, pos);
    sfSprite_setScale(all->sheet->button, all->scale->scale4);
    display_button(all, pos_continue, FIGHT_SCREEN, BUTTON_CONTINUE1);
    print_text_real_size(all, pos_button_continue, "continue", 30);
    print_text_real_size(all,
    pos_message, "vous n'avez pas assez de stamina", 50);
}

void display_not_enouth_mana(all_t *all)
{
    sfVector2f pos = {300, 500};
    sfVector2f pos_continue = {1600, 800};
    sfVector2f pos_button_continue = {1640, 880};
    sfVector2f pos_message = {540, 780};

    sfSprite_setScale(all->sheet->button, all->scale->scale5);
    set_and_draw_pos(all->sheet->button, all->init->sprite1025[0],
    all->window->window, pos);
    sfSprite_setScale(all->sheet->button, all->scale->scale4);
    display_button(all, pos_continue, FIGHT_SCREEN, BUTTON_CONTINUE1);
    print_text_real_size(all, pos_button_continue, "continue", 30);
    print_text_real_size(all,
    pos_message, "vous n'avez pas assez de mana", 50);
}
