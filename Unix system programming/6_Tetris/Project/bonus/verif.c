/*
** EPITECH PROJECT, 2022
** verif.c
** File description:
** check things
*/
#include "include/include.h"

int verif_end(all_t *all, char **form, int key)
{
    int x = all->cur_form->pos_x;
    int y = all->cur_form->pos_y;
    int z = count_line_in_form(form);
    for (int i = 0; form[i] != NULL; i++) {
        for (int j = 0; form[i][j] != '\0'; j++) {
            if (i != z - 1) {
                if (form[i][j] != ' ') {
                    if (all->map->map[y + i][x + j] != ' ')
                        return all->parameter->key_quit;
                }
            }
        }
    }
    return key;
}

int verif_bord_x(all_t *all, int j)
{
    int x = all->cur_form->pos_x;
    if (x + j >= all->parameter->map_size_x + 1)
        return 1;
    return 0;
}

int verif_bord_y(all_t *all, int i)
{
    int y = all->cur_form->pos_y;
    if (y + i >= all->parameter->map_size_y + 1)
        return 1;
    return 0;
}

int verif_next(all_t *all, char **form)
{
    int x = all->cur_form->pos_x;
    int y = all->cur_form->pos_y;
    int z = count_line_in_form(form);
    for (int i = 0; form[i] != NULL && verif_bord_y(all, i) == 0; i++) {
        for (int j = 0; form[i][j] != '\0' && verif_bord_x(all, j) == 0; j++) {
            if (i != z - 1) {
                if (form[i][j] != ' ' && form[i + 1][j] == ' ') {
                    if (all->map->map[y + i + 1][x + j] != ' ')
                        return 1;
                }
            } else {
                if (form[i][j] != ' ') {
                    if (all->map->map[y + i + 1][x + j] != ' ')
                        return 1;
                }
            }
        }
    }
    return 0;
}

int verif_left(all_t *all, char **form)
{
    int x = all->cur_form->pos_x;
    int y = all->cur_form->pos_y;
    for (int i = 0; form[i] != NULL; i++) {
        for (int j = 0; form[i][j] != '\0'; j++) {
            if (j != 0) {
                if (form[i][j] != ' ' && form[i][j - 1] == ' ') {
                    if (all->map->map[y + i][x + j - 1] != ' ')
                        return 1;
                }
            } else {
                if (form[i][j] != ' ') {
                    if (all->map->map[y + i][x + j - 1] != ' ')
                        return 1;
                }
            }
        }
    }
    return 0;
}

int verif_right(all_t *all, char **form)
{
    int x = all->cur_form->pos_x;
    int y = all->cur_form->pos_y;
    for (int i = 0; form[i] != NULL; i++) {
        for (int j = 0; form[i][j] != '\0'; j++) {
            if (form[i][j] != ' ' && (form[i][j + 1] == ' ' || form[i][j + 1] == '\0')) {
                if (all->map->map[y + i][x + j + 1] != ' ')
                    return 1;
            }
        }
    }
    return 0;
}
