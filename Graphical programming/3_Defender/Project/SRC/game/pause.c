/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** menu_pause
*/

#include "../../include/include.h"

static void back_to_menu(all_t *all, sfRenderWindow *window, sfVector2f pos)
{
    if (mouse_on_button(all->menu->m_pos, all->menu->hit_box_pos[1]) == 0)
        set_and_draw_pos
            (all->menu->button, all->menu->button_rect[8], window, pos);
    else {
        set_and_draw_pos
            (all->menu->button, all->menu->button_rect[9], window, pos);
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            sfSound_stop(all->sound->music_jeu);
            sfSound_play(all->sound->music_menu);
            all->enemi->moov = 1;
            all->enemi->wave = -1;
            reinnit_wave(all);
            all->menu->menu1 = 1;
        }
    }
}

static void do_it_all(all_t *all, sfRenderWindow *window)
{
    all->enemi->moov = 0;
    sfVector2f pos = {600, 300};
    sfVector2f pos2 = {1100, 300};
    if (mouse_on_button(all->menu->m_pos, all->menu->hit_box_pos[0]) == 0)
        set_and_draw_pos
            (all->menu->button, all->menu->button_rect[0], window, pos);
    else {
        set_and_draw_pos
            (all->menu->button, all->menu->button_rect[1], window, pos);
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            all->enemi->moov = 1;
            all->menu->menu1 = 10;
        }
    }
    back_to_menu(all, window, pos2);
}

void menu_pause(all_t *all, sfRenderWindow *window, sfEvent event)
{
    if (sfKeyboard_isKeyPressed(sfKeyEscape))
        all->menu->menu1 = 11;
    if (all->menu->menu1 == 11) {
        all->map->clic = 0;
        do_it_all(all, window);
    }
}
