/*
** EPITECH PROJECT, 2022
** moov.c
** File description:
** moov a tetrimino
*/
#include "include/include.h"

void moov_to_left(all_t *all, char **form)
{
    clear_form(all, form);
    all->cur_form->pos_x--;
    put_form(all, form);
}

void moov_to_right(all_t *all, char **form)
{
    clear_form(all, form);
    all->cur_form->pos_x++;
    put_form(all, form);
}

int perma_moov(all_t *all, char **form, int key)
{
    if (verif_next(all, form) == 1) {
        all->cur_form->pos_x = all->parameter->map_size_x/2;
        all->cur_form->pos_y = 1;
        verif_lines(all);
        new_form(all);
        form = all->cur_form->form;
        return verif_end(all, form, key);
    } else {
        clear_form(all, form);
        all->cur_form->pos_y++;
        put_form(all, form);
        return key;
    }
    return 0;
}
