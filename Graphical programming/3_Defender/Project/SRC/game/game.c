/*
** EPITECH PROJECT, 2022
** my_defender
** File description:
** game
*/

#include "../../include/include.h"

void game_lunch(all_t *all, sfRenderWindow *window, sfEvent event)
{
    all->global_values->score += all->enemi->moov;
    put_map(all, window);
    put_enemi(all, window);
    mod_pos(all);
    put_tour(all,window);
    init_mines(all, window);
    init_wall(all, window);
    init_tour(all, window);
    init_tour_two(all, window);
    next_wave(all);
    menu_pause(all, window, event);
    score(all, window);
}
