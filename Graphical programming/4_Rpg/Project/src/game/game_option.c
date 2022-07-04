/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** game_option.c
*/

#include "../../include/my_rpg.h"
#include "../../include/macro.h"

int parameter_game(all_t *all)
{
    sfVector2f pos_back = {100, 700};
    display_button(all, pos_back, GAME_SCREEN, GAME_SCREEN);
    pos_buttons(all, pos_back, GAME_SCREEN);
    return 0;
}
