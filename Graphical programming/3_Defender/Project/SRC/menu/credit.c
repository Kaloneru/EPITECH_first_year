/*
** EPITECH PROJECT, 2022
** credit.c
** File description:
** display crédit
*/

#include "../../include/include.h"

static void init_score(all_t *all)
{
    all->credit->pos_credit.x = 500;
    all->credit->pos_credit.y = 400;
    all->credit->font = sfFont_createFromFile("arial.ttf");
    all->credit->text = sfText_create();
    sfText_setFont(all->credit->text, all->credit->font);
    sfText_setPosition(all->credit->text, all->credit->pos_credit);
    sfText_setCharacterSize(all->credit->text, 40);
}

void display_score(all_t *all, sfRenderWindow *window)
{
    all->credit->text_display =
        "Réalisé par Léo L'Huillier et Pier-Alexandre Rosa";
    sfText_setString(all->credit->text, all->credit->text_display);
    sfRenderWindow_drawText(window, all->credit->text, NULL);
}

void credit(all_t *all, sfRenderWindow *window)
{
    sfVector2f pos = {800, 700};
    init_score(all);
    display_score(all, window);

    if (mouse_on_button(all->menu->m_pos, all->menu->hit_box_pos[2]) == 0)
        set_and_draw_pos
            (all->menu->button, all->menu->button_rect[8], window, pos);
    else {
        set_and_draw_pos
            (all->menu->button, all->menu->button_rect[9], window, pos);
        if (sfMouse_isButtonPressed(sfMouseLeft))
            all->menu->menu1 = 1;
    }
}
