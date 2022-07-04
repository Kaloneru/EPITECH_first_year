/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** init_tour_two
*/

#include "../../include/include.h"

static void next(all_t *all, sfRenderWindow *window, int i)
{
    if (mouse_on_button(all->menu->m_pos, all->map->map_rect[i]) == 1
        && no_tour_on_path(i) == 0
        && all->map->tour_on_rect[i] == 0) {
        sfVector2f pos =
            {all->map->map_rect[i].left, all->map->map_rect[i].top - 50};
        sfSprite_setPosition(all->map->build, pos);
        set_and_draw(all->map->build, all->map->tour_rect[3], window);
        if (sfMouse_isButtonPressed(sfMouseLeft)
            && all->map->tour_on_rect[i] == 0) {
            all->map->tour_pos[all->map->nb_tour].x =
                all->map->map_rect[i].left;
            all->map->tour_pos[all->map->nb_tour].y =
                all->map->map_rect[i].top - 50;
            all->map->type_tour[all->map->nb_tour] = 3;
            all->map->nb_tour++;
            all->map->clic = 0;
            all->map->tour_on_rect[i] = 2;
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

void init_tour_two(all_t *all, sfRenderWindow *window)
{
    sfVector2f pos_st = {1600, 825};
    sfSprite_setPosition(all->map->build, pos_st);
    set_and_draw(all->map->build, all->map->tour_rect[3], window);
    sfIntRect tour_pos = {1600, 825, 1700, 1000};
    if (all->global_values->money > 0
        && (mouse_on_button(all->menu->m_pos, tour_pos) == 1
            || all->map->clic == 2)) {
        if (sfMouse_isButtonPressed(sfMouseLeft) || all->map->clic == 2) {
            all->map->clic = 2;
        }
    }
    if (all->map->clic == 2
        && mouse_on_button(all->menu->m_pos, tour_pos) == 0) {
        mouse_on_button_map(all, window);
    }
}
