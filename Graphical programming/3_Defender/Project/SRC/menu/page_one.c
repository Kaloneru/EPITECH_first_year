/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** page_one
*/

#include "../../include/include.h"

void display_button_quit(all_t *all, sfVector2f pos, sfRenderWindow *window)
{
    if (mouse_on_button(all->menu->m_pos, all->menu->hit_box_pos[4]) == 0)
        set_and_draw_pos
            (all->menu->button, all->menu->button_rect[4], window, pos);
    else {
        set_and_draw_pos
            (all->menu->button, all->menu->button_rect[5], window, pos);
        if (sfMouse_isButtonPressed(sfMouseLeft))
            all->menu->menu1 = 4;
    }
}

void display_button_option(all_t *all, sfVector2f pos, sfRenderWindow *window)
{
    if (mouse_on_button(all->menu->m_pos, all->menu->hit_box_pos[3]) == 0)
        set_and_draw_pos
            (all->menu->button, all->menu->button_rect[2], window, pos);
    else {
        set_and_draw_pos
            (all->menu->button, all->menu->button_rect[3], window, pos);
        if (sfMouse_isButtonPressed(sfMouseLeft))
            all->menu->menu1 = 3;
    }
}

static void new_game_two(all_t *all, sfRenderWindow *window, sfVector2f pos)
{
    init_pos_buttons(all);
    if (mouse_on_button(all->menu->m_pos, all->menu->hit_box_pos[0]) == 0)
        set_and_draw_pos
            (all->menu->button, all->menu->button_rect[0], window, pos);
    else {
        set_and_draw_pos
            (all->menu->button, all->menu->button_rect[1], window, pos);
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            all->menu->menu1 = 10;
            sfSound_stop(all->sound->music_menu);
            sfSound_play(all->sound->music_jeu);
        }
    }
}

static void new_game(all_t *all ,sfRenderWindow *window)
{
    sfVector2f pos = {600, 300};
    sfVector2f pos2 = {1100, 300};
    sfVector2f pos3 = {600, 700};
    sfVector2f pos4 = {1100, 700};

    new_game_two(all, window, pos);
    if (mouse_on_button(all->menu->m_pos, all->menu->hit_box_pos[1]) == 0)
        set_and_draw_pos
            (all->menu->button, all->menu->button_rect[6], window, pos2);
    else {
        set_and_draw_pos
            (all->menu->button, all->menu->button_rect[7], window, pos2);
        if (sfMouse_isButtonPressed(sfMouseLeft))
            all->menu->menu1 = 2;
    }
    display_button_option(all, pos3, window);
    display_button_quit(all, pos4, window);
}

void page_one(all_t *all, sfRenderWindow *window)
{
    new_game(all, window);
}
