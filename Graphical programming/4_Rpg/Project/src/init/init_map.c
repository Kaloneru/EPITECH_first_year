/*
** EPITECH PROJECT, 2021
** rpg
** File description:
** init_map.c
*/

#include "../../include/my_rpg.h"

int init_home(all_t *all)
{
    all->home->map = my_str_to_word_array
    (open_and_read("res/maps/home1/ground.conf"), '\n');
    all->home->obj = my_str_to_word_array
    (open_and_read("res/maps/home1/obj1.conf"), '\n');
    all->home->pnj = my_str_to_word_array
    (open_and_read("res/maps/home1/pnj.conf"), '\n');
    all->home->obj2 = my_str_to_word_array
    (open_and_read("res/maps/home1/obj2.conf"), '\n');
    all->home->hit_box = my_str_to_word_array
    (open_and_read("res/maps/home1/hit_box.conf"), '\n');
    return 0;
}

int init_taverne(all_t *all)
{
    all->taverne->map = my_str_to_word_array
    (open_and_read("res/maps/taverne/ground.conf"), '\n');
    all->taverne->obj = my_str_to_word_array
    (open_and_read("res/maps/taverne/obj1.conf"), '\n');
    all->taverne->pnj = my_str_to_word_array
    (open_and_read("res/maps/taverne/pnj.conf"), '\n');
    all->taverne->obj2 = my_str_to_word_array
    (open_and_read("res/maps/taverne/obj2.conf"), '\n');
    all->taverne->hit_box = my_str_to_word_array
    (open_and_read("res/maps/taverne/hit_box.conf"), '\n');
    return 0;
}

int init_essinde(all_t *all)
{
    all->essinde->map = my_str_to_word_array
    (open_and_read("res/maps/temple_decinday/ground.conf"), '\n');
    all->essinde->obj = my_str_to_word_array
    (open_and_read("res/maps/temple_decinday/obj1.conf"), '\n');
    all->essinde->pnj = my_str_to_word_array
    (open_and_read("res/maps/temple_decinday/pnj.conf"), '\n');
    all->essinde->obj2 = my_str_to_word_array
    (open_and_read("res/maps/temple_decinday/obj2.conf"), '\n');
    all->essinde->hit_box = my_str_to_word_array
    (open_and_read("res/maps/temple_decinday/hit_box.conf"), '\n');
    return 0;
}

int init_shamerodia(all_t *all)
{
    all->shamrodia->map = my_str_to_word_array
    (open_and_read("res/maps/temple_de_chambrodia/ground.conf"), '\n');
    all->shamrodia->obj = my_str_to_word_array
    (open_and_read("res/maps/temple_de_chambrodia/obj1.conf"), '\n');
    all->shamrodia->pnj = my_str_to_word_array
    (open_and_read("res/maps/temple_de_chambrodia/pnj.conf"), '\n');
    all->shamrodia->obj2 = my_str_to_word_array
    (open_and_read("res/maps/temple_de_chambrodia/obj2.conf"), '\n');
    all->shamrodia->hit_box = my_str_to_word_array
    (open_and_read("res/maps/temple_de_chambrodia/hit_box.conf"), '\n');
    init_home(all);
    init_essinde(all);
    return 0;
}

void init_map(all_t *all)
{
    all->game->map = my_str_to_word_array
    (open_and_read("res/maps/niv1/ground.conf"), '\n');
    all->game->obj = my_str_to_word_array
    (open_and_read("res/maps/niv1/obj1.conf"), '\n');
    all->game->pnj = my_str_to_word_array
    (open_and_read("res/maps/niv1/pnj.conf"), '\n');
    all->game->sound = my_str_to_word_array
    (open_and_read("res/maps/niv1/ground.conf"), '\n');
    all->game->obj2 = my_str_to_word_array
    (open_and_read("res/maps/niv1/obj2.conf"), '\n');
    all->game->hit_box = my_str_to_word_array
    (open_and_read("res/maps/niv1/hit_box.conf"), '\n');
    all->game->build = my_str_to_word_array
    (open_and_read("res/maps/niv1/build.conf"), '\n');
    all->game->enemi = my_str_to_word_array
    (open_and_read("res/maps/niv1/ennemy.conf"), '\n');
    init_shamerodia(all);
    init_taverne(all);
}
