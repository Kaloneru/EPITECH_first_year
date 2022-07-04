/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** init_mines
*/

#include "../../include/include.h"

static void next(all_t *all, sfRenderWindow *window, int i)
{
    if (mouse_on_button(all->menu->m_pos, all->map->map_rect[i]) == 1
        && no_tour_on_path(i) > 0) {
        sfVector2f pos =
            {all->map->map_rect[i].left, all->map->map_rect[i].top};
        sfSprite_setPosition(all->sprite->sprite, pos);
        set_and_draw
            (all->sprite->sprite, all->sprite->sprite_rect[20], window);
        if (sfMouse_isButtonPressed(sfMouseLeft)
            && all->map->tour_on_rect[i] == 0) {
            all->map->tour_pos[all->map->nb_tour].x =
                all->map->map_rect[i].left;
            all->map->tour_pos[all->map->nb_tour].y =
                all->map->map_rect[i].top;
            all->map->type_tour[all->map->nb_tour] = 6;
            all->map->nb_tour++;
            all->map->clic = 0;
            all->global_values->money--;
        }
    }
}

static void mouse_on_button_map(all_t *all, sfRenderWindow *window)
{
    int i = 0;

    while (i != 200) {
        next(all, window, i);
        i++;
    }
}

void init_mines(all_t *all, sfRenderWindow *window)
{
    sfVector2f pos_st = {1400, 850};
    sfSprite_setPosition(all->sprite->sprite, pos_st);
    set_and_draw(all->sprite->sprite, all->sprite->sprite_rect[20], window);
    sfIntRect tour_pos = {1400, 850, 1500, 950};
    if (all->global_values->money > 0
        && (mouse_on_button(all->menu->m_pos, tour_pos) == 1
            || all->map->clic == 4)) {
        if (sfMouse_isButtonPressed(sfMouseLeft) || all->map->clic == 4) {
            all->map->clic = 4;
        }
    }
    if (all->map->clic == 4) {
        mouse_on_button_map(all, window);
    }
}
