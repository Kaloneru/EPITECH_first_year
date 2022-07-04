/*
** EPITECH PROJECT, 2022
** tetris
** File description:
** main
*/

#include "include/include.h"

int calc_max(all_t *all, int i)
{
    if (all->all_form->cara_form[i][0] > all->all_form->cara_form[i][1])
        return all->all_form->cara_form[i][0];
    return all->all_form->cara_form[i][1];
}

static char init_cara(all_t *all, int i)
{
    if (all->all_form->cara_form[i][2] == 0)
        return 'A';
    if (all->all_form->cara_form[i][2] == 1)
        return 'Z';
    if (all->all_form->cara_form[i][2] == 2)
        return 'E';
    if (all->all_form->cara_form[i][2] == 3)
        return 'R';
    if (all->all_form->cara_form[i][2] == 4)
        return 'T';
    if (all->all_form->cara_form[i][2] == 5)
        return 'Y';
    if (all->all_form->cara_form[i][2] == 6)
        return 'U';
    return ' ';
}

void new_form(all_t *all)
{
    free_tab(all->cur_form->form);
    int i = all->cur_form->next_form;
    int max = calc_max(all, i);
    char cara = init_cara(all, i);
    all->cur_form->form = mem_alloc_2d_char_array(max + 2, max + 2);
    for (int y = 1; y != max + 1; y++) {
        for (int x = 0; x != max + 1; x++) {
            if (all->forms[i].form[y][x] == '*')
                all->cur_form->form[y - 1][x] = cara;
            else if (x == max)
                all->cur_form->form[y - 1][x] = '\0';
            else
                all->cur_form->form[y - 1][x] = ' ';
        }
    }
    all->cur_form->form[max] = NULL;
    all->cur_form->next_form = rand() % all->all_form->nb;
    while (all->all_form->cara_form[all->cur_form->next_form][0] == 0)
        all->cur_form->next_form = rand() % all->all_form->nb;
}

int count_line_in_form(char **form)
{
    int i = 0;
    for (; form[i] != NULL; i++) {
        i = i;
    }
    return i;
}

int more_long(char **form)
{
    int i = count_line_in_form(form);
    int j = my_strlen(form[0]);

    if (i > j)
        return i;
    return j;
}

int algo(all_t *all)
{
    int key;
    int i = 0;
    int result = 0;
    all->map->start = time(NULL);
    all->cur_form->pos_x = all->parameter->map_size_x/2;
    all->cur_form->pos_y = 1;
    all->cur_form->form = mem_alloc_2d_char_array(2, 2);
    new_form(all);
    char **form = all->cur_form->form;
    while (key != all->parameter->key_quit) {
        all->map->now = time(NULL);
        put_form(all, form);
        all->map->clock = (unsigned long)difftime(all->map->now,all->map->start);
        if (key == all->parameter->key_drop)
            perma_moov(all, form, key);
        if (key == all->parameter->key_left && verif_left(all, form) == 0)
            moov_to_left(all, form);
        if (key == all->parameter->key_right && verif_right(all, form) == 0)
            moov_to_right(all, form);
        if (key == all->parameter->key_turn) {
            clear_form(all, form);
            form = my_rotate_form(all, form);
        }
        size_map(all);
        timeout(100);
        key = getch();
        if (all->map->clock % 2 == 0 && i == 0) {
            key = perma_moov(all, form, key);
            i = 1;
        }
        if (all->map->clock % 2 == 1 && i == 1)
            i = 0;
        form = all->cur_form->form;
        clear();
    }
    return result;
}

int main(int argc, char **argv)
{
    all_t *all = malloc(sizeof(all_t));
    malloc_struct(all);
    take_all_form(all);
    initialize_game(all);
    srand(time(NULL));
    fill_struct(all, argc, argv);
    if (check_struct(all) == -1)
        return 84;
    map_generator(all);
    initscr();
    noecho();
    algo(all);
    endwin();
    my_put_tab(all->all_form->all_name_form);
    for (int i = 0; i != all->all_form->nb; i++)
        my_put_tab(all->forms[i].form);
    free_all(all);
    return 0;
}
