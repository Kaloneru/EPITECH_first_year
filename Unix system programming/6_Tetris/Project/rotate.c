/*
** EPITECH PROJECT, 2022
** rotate.c
** File description:
** rotate a tetrimino
*/

#include "include/include.h"

void rotate(all_t *all, int max)
{
    all->cur_form->new_x_p = all->cur_form->y_p;
    all->cur_form->new_y_p = max - 1 - all->cur_form->x_p;
}

int verif_rotate(all_t *all, char **form)
{
    int x = all->cur_form->pos_x;
    int y = all->cur_form->pos_y;
    for (int i = 0; form[i] != NULL; i++) {
        for (int j = 0; form[i][j] != '\0'; j++) {
            if (form[i][j] != ' ') {
                if (all->map->map[y + i][x + j] != ' ')
                    return 1;
            }
        }
    }
    return 0;
}

static char **rotate_form(char **form, char **temp, int max)
{
    for (int i = 0; i != max; i++) {
        for (int j = 0; j != max; j++) {
            form[i][j] = temp[i][j];
        }
    }
    return form;
}

char **my_rotate_form(all_t *all, char **form)
{
    int max = all->cur_form->more_long;
    char **temp = mem_alloc_2d_char_array(max + 1, max + 1);
    for (int i = 0; i != max; i++) {
        for (int j = 0; j != max; j++) {
            all->cur_form->x_p = j;
            all->cur_form->y_p = i;
            rotate(all, max);
            temp[all->cur_form->new_y_p][all->cur_form->new_x_p] = form[i][j];
        }
    }
    if (verif_rotate(all, temp) == 0) {
        form = rotate_form(form, temp, max);
    }
    free_tab(temp);
    return form;
}
