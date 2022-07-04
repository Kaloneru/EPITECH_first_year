/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** parameter
*/

#include "../../include/include.h"

static void display_button_menu(all_t *all, sfRenderWindow *window,
                                sfVector2f pos)
{
    if (mouse_on_button(all->menu->m_pos, all->menu->hit_box_pos[5]) == 0)
        set_and_draw_pos
            (all->menu->button, all->menu->button_rect[8],window, pos);
    else {
        set_and_draw_pos
            (all->menu->button, all->menu->button_rect[9],window, pos);
        if (sfMouse_isButtonPressed(sfMouseLeft))
            all->menu->menu1 = 1;
    }
}

int parameter(all_t *all, sfRenderWindow *window)
{
    int i = 1;
    sfVector2f pos = {500, 500};
    sfVector2f pos2 = {1500, 500};

    modif_rect(all, i);
    set_and_draw_pos
        (all->sound->sprite_volume,
         all->sound->rect_sprite_volume[all->sound->volume],window, pos);
    display_button_menu(all, window, pos2);
    sfSound_setVolume(all->sound->music_menu, 10 * all->sound->volume);
    sfSound_setVolume(all->sound->music_jeu, 10 * all->sound->volume);
    sfSound_setVolume(all->sound->sound, 10 * all->sound->volume);
    return 0;
}
