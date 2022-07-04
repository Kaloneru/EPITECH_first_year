/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** how_to_play.c
*/

#include "../../include/my_rpg.h"

void print_text_america(all_t *all, sfVector2f pos, char *string)
{
    sfText *text = sfText_create();
    sfFont *font = sfFont_createFromFile
    ("res/ttf/amerika_pro/amerika_pro.ttf");

    sfText_setString(text, string);
    sfText_setFont(text, font);
    sfText_setString(text, string);
    sfText_setPosition(text, pos);
    sfText_setCharacterSize(text, 25);
    sfText_setColor(text, sfBlack);
    sfRenderWindow_drawText(all->window->window, text, NULL);
}

int player_help(all_t *all)
{
    sfVector2f pos_z = {100, 400};
    sfVector2f pos_s = {100, 300};
    sfVector2f pos_q = {100, 200};
    sfVector2f pos_d = {100, 100};
    sfVector2f pos_objective = {1500, 100};
    sfVector2f pos_text = {1000, 200};
    sfVector2f pos_combat = {1500, 500};
    print_text_america(all, pos_s, "Reculer : S");
    print_text_america(all, pos_z, "Avancer : Z");
    print_text_america(all, pos_q, "Aller a gauche : Q");
    print_text_america(all, pos_d, "Aller a droite : D");
    print_text_america(all, pos_objective, "Objectifs");
    print_text_america(all, pos_text, "votre objectif\
    est de vancre le terrible \
    ours\n \
    vous pouvez le trouver dans le coin en haut a droite\
    de la carte.\nvous pouvez\
    aussi \
    combattre les slimes et les pnj que vous croisez");
    print_text_america(all, pos_combat, "combat");
    return 0;
}

int how_to_play(all_t *all)
{
    sfVector2f pos_text = {145, 750};
    sfVector2f pos_back = {100, 700};
    display_button(all, pos_back, 1, 5);
    print_text_harlow(all, pos_text, "Back");
    player_help(all);
    return 0;
}
