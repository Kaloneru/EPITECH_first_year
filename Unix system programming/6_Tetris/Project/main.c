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
    all->cur_form->form = mem_alloc_2d_char_array(max + 1, max + 1);
    for (int y = 1; y != all->all_form->cara_form[i][1] + 1; y++) {
        for (int x = 0; x != all->all_form->cara_form[i][0] + 1; x++) {
            if (all->forms[i].form[y][x] == '*')
                all->cur_form->form[y - 1][x] = cara;
            else if (x == all->all_form->cara_form[i][0])
                all->cur_form->form[y - 1][x] = '\0';
            else
                all->cur_form->form[y - 1][x] = ' ';
        }
    }
    all->cur_form->more_long = max;
    all->cur_form->form[all->all_form->cara_form[i][1]] = NULL;
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

int my_all_strlen(char **form)
{
    int result = 0;
    for (int j = 0; form[j] != NULL; j++) {
        if (my_strlen(form[j]) > result)
            result = my_strlen(form[j]);
    }
    return result;
}

int more_long(char **form)
{
    int i = count_line_in_form(form);
    int j = my_all_strlen(form);

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

void my_putstr_mod(char *str)
{
    for (int i = 0; str[i] != '.'; i++)
        write(1, &str[i], 1);
}

void my_put_tab_mod(char **form)
{
    for (int i = 1; form[i] != NULL; i++) {
        my_putstr(form[i]);
        my_putchar('\n');
    }
}

void debug(all_t *all)
{
    my_putstr("Key left: ");
    my_put_nbr(all->parameter->key_left);
    my_putstr("\n");
    my_putstr("Key right: ");
    my_put_nbr(all->parameter->key_right);
    my_putstr("\n");
    my_putstr("Key turn: ");
    my_put_nbr(all->parameter->key_turn);
    my_putstr("\n");
    my_putstr("Key drop: ");
    my_put_nbr(all->parameter->key_drop);
    my_putstr("\n");
    my_putstr("Key quit: ");
    my_put_nbr(all->parameter->key_quit);
    my_putstr("\n");
    my_putstr("Key pause: ");
    my_put_nbr(all->parameter->key_pause);
    my_putstr("\n");
    my_putstr("Next: ");
    if (all->parameter->without_next == true)
        my_putstr("Yes\n");
    else
        my_putstr("No\n");
    my_putstr("Level: ");
    my_put_nbr(all->parameter->level);
    my_putstr("\n");
    my_putstr("Size: ");
    my_put_nbr(all->parameter->map_size_y);
    my_putstr("*");
    my_put_nbr(all->parameter->map_size_x);
    my_putstr("\n\n");
    my_putstr("Number of tetriminos: ");
    my_put_nbr(all->all_form->nb);
    my_putstr("\n");
    for (int i = 0; i != all->all_form->nb; i++) {
        my_putstr("Tetriminos '");
        my_putstr_mod(all->all_form->all_name_form[i]);
        if (all->all_form->cara_form[i][0] != 0) {
            my_putstr("': size ");
            my_put_nbr(all->all_form->cara_form[i][0]);
            my_putstr("*");
            my_put_nbr(all->all_form->cara_form[i][1]);
            my_putstr(", color ");
            my_put_nbr(all->all_form->cara_form[i][2]);
            my_putstr("\n");
            my_put_tab_mod(all->forms[i].form);
        } else
            my_putstr("': error\n");
    }
}

int main(int argc, char **argv)
{
    all_t *all = malloc(sizeof(all_t));
    malloc_struct(all);
    take_all_form(all);
    initialize_game(all);
    srand(time(NULL));
    fill_struct(all, argc, argv);
    if (all->parameter->debug == true) {
        debug(all);
        return 0;
    }
    map_generator(all);
    initscr();
    noecho();
    algo(all);
    endwin();
    free_all(all);
    return 0;
}
