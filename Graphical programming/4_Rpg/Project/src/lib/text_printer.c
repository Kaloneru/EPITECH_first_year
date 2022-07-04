/*
** EPITECH PROJECT, 2022
** RPG
** File description:
** text_printer.c
*/

#include "../../include/my_rpg.h"

void print_text_real(all_t *all, sfVector2f pos, char *string)
{
    sfText *text = sfText_create();
    sfFont *font = sfFont_createFromFile("res/ttf/oracles_bold.ttf");

    sfText_setString(text, string);
    sfText_setFont(text, font);
    sfText_setString(text, string);
    sfText_setPosition(text, pos);
    sfText_setCharacterSize(text, 25);
    sfRenderWindow_drawText(all->window->window, text, NULL);
}

void print_text_real_size(all_t *all, sfVector2f pos, char *string, int size)
{
    sfText *text = sfText_create();
    sfFont *font = sfFont_createFromFile("res/ttf/oracles_bold.ttf");

    sfText_setString(text, string);
    sfText_setFont(text, font);
    sfText_setString(text, string);
    sfText_setPosition(text, pos);
    sfText_setCharacterSize(text, size);
    sfRenderWindow_drawText(all->window->window, text, NULL);
}
