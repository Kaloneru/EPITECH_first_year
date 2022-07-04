/*
** EPITECH PROJECT, 2022
** init.c
** File description:
** malloc a struct
*/
#include "include/include.h"

void init_rect(all_t *all)
{
    int x = 0;
    int y = 0;
    int i = 0;

    while (y != 1) {
        if (x == 7) {
            x = 0;
            y++;
        }
        all->csfml->sprite_rect[i].left = 50 * x;
        all->csfml->sprite_rect[i].top = 50 * y;
        all->csfml->sprite_rect[i].width = 49;
        all->csfml->sprite_rect[i].height = 49;
        i++;
        x++;
    }
}

void malloc_struct(all_t *all)
{
    all->all_form = malloc(sizeof(all_form_t));
    all->cur_form = malloc(sizeof(cur_form_t));
    all->map = malloc(sizeof(map_t));
    all->parameter = malloc(sizeof(parameter_t));
}

void initialize_game(all_t *all)
{
    all->parameter->debug = false;
    all->parameter->key_drop = 66;
    all->parameter->key_left = 68;
    all->parameter->key_pause = ' ';
    all->parameter->key_quit = 'q';
    all->parameter->key_right = 67;
    all->parameter->key_turn = 65;
    all->parameter->level = 1;
    all->parameter->map_size_x = 20;
    all->parameter->map_size_y = 10;
    all->parameter->without_next = false;
}

void free_tab(char **tab)
{
    for (int i = 0; tab[i] != NULL; i++) {
        free(tab[i]);
    }
    free(tab);
}


void free_all(all_t *all)
{
    //free(all->cur_form->form);
    //free_tab(all->all_form->all_name_form);
    for (int i = 0; i != all->all_form->nb; i++) {
        free_tab(all->forms[i].form);
        free(all->all_form->cara_form[i]);
    }
    free(all->all_form->cara_form);
    free(all);
}
