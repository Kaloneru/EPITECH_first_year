/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** init_tour
*/

#include "../../include/include.h"

int no_tour_on_path(int i)
{
    if (i >= 92 && i <= 104)
        return 1;
    if (i >= 45 && i <= 47)
        return 1;
    if (i >= 128 && i <= 131)
        return 1;
    if (i == 84 || i == 67 || i == 87 || i == 91 || i == 44)
        return 2;
    if (i == 64 || i == 107 || i == 111 || i == 91)
        return 2;
    if (i == 127)
        return 3;
    return 0;
}

static void next(all_t *all, int i)
{
    if (sfMouse_isButtonPressed(sfMouseLeft)
        && all->map->tour_on_rect[i] == 0) {
        all->map->tour_pos[all->map->nb_tour].x = all->map->map_rect[i].left;
        all->map->tour_pos[all->map->nb_tour].y =
            all->map->map_rect[i].top - 50;
        all->map->nb_tour++;
        all->map->clic = 0;
        all->map->tour_on_rect[i] = 1;
        all->global_values->money--;
    }
}

static void mouse_on_button_map(all_t *all, sfRenderWindow *window)
{
    int i = 0;

    while (i != 200 && all->global_values->on_tour == 0) {
        if (mouse_on_button(all->menu->m_pos, all->map->map_rect[i]) == 1
            && no_tour_on_path(i) == 0
            && all->map->tour_on_rect[i] == 0) {
            sfVector2f pos =
                {all->map->map_rect[i].left, all->map->map_rect[i].top - 50};
            sfSprite_setPosition(all->map->build, pos);
            set_and_draw(all->map->build, all->map->tour_rect[0], window);
            next(all, i);
        }
        i++;
    }
}

void mouse_on_tour(all_t *all, sfRenderWindow *window)
{
    for (int i = 0; i != 200; i++) {
        if (mouse_on_button(all->menu->m_pos, all->map->map_rect[i]) == 1
            && all->map->tour_on_rect[i] == 1) {
            sfVector2f scale1 = {0.3, 0.3};
            sfSprite_setScale(all->map->build, scale1);
            sfVector2f pos =
                {all->map->map_rect[i].left - 10,
                 all->map->map_rect[i].top - 100};
            sfSprite_setPosition(all->map->build, pos);
            set_and_draw(all->map->build, all->map->tour_rect[1], window);
            sfVector2f pos1 =
                {all->map->map_rect[i].left + 50,
                 all->map->map_rect[i].top - 100};
            sfSprite_setPosition(all->map->build, pos1);
            set_and_draw(all->map->build, all->map->tour_rect[2], window);
            sfVector2f scale = {0.5, 0.5};
            sfSprite_setScale(all->map->build, scale);
        }
    }
}

void init_tour(all_t *all, sfRenderWindow *window)
{
    sfVector2f pos_st = {1700, 825};
    sfSprite_setPosition(all->map->build, pos_st);
    set_and_draw(all->map->build, all->map->tour_rect[0], window);
    sfIntRect tour_pos = {1700, 825, 1800, 1000};
    if (all->global_values->money > 0
        && (mouse_on_button(all->menu->m_pos, tour_pos) == 1
            || all->map->clic == 1)) {
        if (sfMouse_isButtonPressed(sfMouseLeft) || all->map->clic == 1) {
            all->map->clic = 1;
        }
    }
    if (all->map->clic == 1
        && mouse_on_button(all->menu->m_pos, tour_pos) == 0) {
        mouse_on_button_map(all, window);
    }
    if (all->map->clic == 0
        && mouse_on_button(all->menu->m_pos, tour_pos) == 0) {
        mouse_on_tour(all, window);
    }
}
