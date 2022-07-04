/*
** EPITECH PROJECT, 2022
** credit.c
** File description:
** display crédit
*/

#include "../../include/my_rpg.h"
#include "../../include/macro.h"

void print_text_harlow(all_t *all, sfVector2f pos, char *string)
{
    sfText *text = sfText_create();
    sfFont *font = sfFont_createFromFile("res/ttf/harlow.ttf");

    sfText_setString(text, string);
    sfText_setFont(text, font);
    sfText_setString(text, string);
    sfText_setPosition(text, pos);
    sfText_setCharacterSize(text, 25);
    sfRenderWindow_drawText(all->window->window, text, NULL);
}

void credit(all_t *all)
{
    sfVector2f pos = {100, 700};
    sfVector2f pos_text_center = {700, 500};
    sfVector2f pos_text_next = {750, 550};
    sfVector2f pos_text_back = {145, 750};

    char *credit = "Realise par Pier-Alexandre Rosa, Evan Labourdette";
    char *credit2 = "Leo L'Huilier et Henry Letellier";
    display_button(all, pos, 1, 5);
    print_text_harlow(all, pos_text_center, credit);
    print_text_harlow(all, pos_text_next, credit2);
    print_text_harlow(all, pos_text_back, "Back");
}
