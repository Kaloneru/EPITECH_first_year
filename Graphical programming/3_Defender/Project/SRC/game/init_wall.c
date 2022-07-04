/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** init_wall.c
*/

#include "../../include/include.h"

static void horizontal_wall(all_t *all, sfRenderWindow *window ,int i)
{
    if (mouse_on_button(all->menu->m_pos, all->map->map_rect[i]) == 1
        && no_tour_on_path(i) == 2
        && all->map->tour_on_rect[i] == 0) {
        sfVector2f pos =
            {all->map->map_rect[i].left - 25, all->map->map_rect[i].top + 60};
        sfSprite_setPosition(all->map->build, pos);
        set_and_draw(all->map->build, all->map->tour_rect[5], window);
        if (sfMouse_isButtonPressed(sfMouseLeft)
            && all->map->tour_on_rect[i] == 0) {
            all->map->tour_pos[all->map->nb_tour].x =
                all->map->map_rect[i].left - 25;
            all->map->tour_pos[all->map->nb_tour].y =
                all->map->map_rect[i].top + 60;
            all->map->type_tour[all->map->nb_tour] = 5;
            all->map->nb_tour++;
            all->map->clic = 0;
            all->global_values->money--;
        }
    }
}

static void vertical_wall(all_t *all, sfRenderWindow *window, int i)
{
    if (mouse_on_button(all->menu->m_pos, all->map->map_rect[i]) == 1
        && no_tour_on_path(i) == 1
        && all->map->tour_on_rect[i] == 0) {
        sfVector2f pos =
            {all->map->map_rect[i].left - 25, all->map->map_rect[i].top - 25};
        sfSprite_setPosition(all->map->build, pos);
        set_and_draw(all->map->build, all->map->tour_rect[4], window);
        if (sfMouse_isButtonPressed(sfMouseLeft)
            && all->map->tour_on_rect[i] == 0) {
            all->map->tour_pos[all->map->nb_tour].x =
                all->map->map_rect[i].left - 25;
            all->map->tour_pos[all->map->nb_tour].y =
                all->map->map_rect[i].top - 25;
            all->map->type_tour[all->map->nb_tour] = 4;
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
        vertical_wall(all, window, i);
        horizontal_wall(all, window, i);
        i++;
    }
}

void init_wall(all_t *all, sfRenderWindow *window)
{
    sfVector2f pos_st = {1530, 825};
    sfSprite_setPosition(all->map->build, pos_st);
    set_and_draw(all->map->build, all->map->tour_rect[4], window);
    sfIntRect tour_pos = {1500, 825, 1600, 1000};
    if (all->global_values->money > 0
        && (mouse_on_button(all->menu->m_pos, tour_pos) == 1
            || all->map->clic == 3)) {
        if (sfMouse_isButtonPressed(sfMouseLeft)
            || all->map->clic == 3) {
            all->map->clic = 3;
        }
    }
    if (all->map->clic == 3
        && mouse_on_button(all->menu->m_pos, tour_pos) == 0) {
        mouse_on_button_map(all, window);
    }
}
