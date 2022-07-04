/*
** EPITECH PROJECT, 2022
** display.c
** File description:
** display things
*/
#include "include/include.h"

void clear_form(all_t *all, char **form)
{
    int x = all->cur_form->pos_x;
    int y = all->cur_form->pos_y;
    for (int i = 0; form[i] != NULL && y + i != all->parameter->map_size_y + 1; i++) {
        for (int j = 0; form[i][j] != '\0' && x + j != all->parameter->map_size_x + 1; j++) {
            if (form[i][j] != ' ')
                all->map->map[y + i][x + j] = ' ';
        }
    }
}

static void ini_color(void)
{
    start_color();
    init_pair(0, COLOR_BLUE, COLOR_BLACK);
    init_pair(1, COLOR_RED, COLOR_BLACK);
    init_pair(2, COLOR_GREEN, COLOR_BLACK);
    init_pair(3, COLOR_YELLOW, COLOR_BLACK);
    init_pair(4, COLOR_MAGENTA, COLOR_BLACK);
    init_pair(5, COLOR_CYAN, COLOR_BLACK);
    init_pair(6, COLOR_WHITE, COLOR_BLACK);
}

static int coloration(all_t *all, int i, int j, int color)
{
    if (all->map->map[i][j] == 'A')
        color = 0;
    if (all->map->map[i][j] == 'Z')
        color = 1;
    if (all->map->map[i][j] == 'E')
        color = 2;
    if (all->map->map[i][j] == 'R')
        color = 3;
    if (all->map->map[i][j] == 'T')
        color = 4;
    if (all->map->map[i][j] == 'Y')
        color = 5;
    if (all->map->map[i][j] == 'U')
        color = 6;
    if (all->map->map[i][j] == '+' || all->map->map[i][j] == '-')
        color = 6;
    if (all->map->map[i][j] == '|' || all->map->map[i][j] == ' ')
        color = 6;
    return color;
}

static char init_cara(all_t *all, int i, int j)
{
    if (all->map->map[i][j] == '+')
        return '+';
    if (all->map->map[i][j] == '-')
        return '-';
    if (all->map->map[i][j] == '|')
        return '|';
    if (all->map->map[i][j] == ' ')
        return ' ';
    return '*';
}

void put_next_form(all_t *all, char **form)
{
    for (int i = 0; form[i] != NULL; i++) {
        for (int j = 0; form[i][j] != '\0'; j++) {
            if (form[i][j] != ' ')
                mvprintw(LINES/2 - all->parameter->map_size_y/2 + i - 1,
                         COLS/2 + all->parameter->map_size_x/2 + j + 3, "%c",
                         form[i][j]);
        }
    }
}

void put_map(all_t *all)
{
    int i = 0;
    int j = 0;
    char cara = '+';
    int color = 0;

    ini_color();
    mvprintw(LINES/2 + all->parameter->map_size_y/2 - 5,
             COLS/2 - all->parameter->map_size_x/2 - 15,
             "score = %d", all->map->score);
    mvprintw(LINES/2 + all->parameter->map_size_y/2 - 4,
             COLS/2 - all->parameter->map_size_x/2 - 15,
             "Lines = %d", all->map->lines);
    mvprintw(LINES/2 + all->parameter->map_size_y/2 - 2,
             COLS/2 - all->parameter->map_size_x/2 - 15,
             "Level = %d", all->parameter->level);
    mvprintw(LINES/2 + all->parameter->map_size_y/2 - 1,
             COLS/2 - all->parameter->map_size_x/2 - 15,
             "Timer = %d:%d", all->map->clock / 60, all->map->clock % 60);
    put_next_form(all, all->forms[all->cur_form->next_form].form);
    while (all->map->map[i] != NULL) {
        j = 0;
        while (all->map->map[i][j] != '\0') {
            color = coloration(all, i, j, color);
            cara = init_cara(all, i, j);
            attron(COLOR_PAIR(color));
            mvprintw(LINES/2 - all->parameter->map_size_y/2 + i - 1,
                     COLS/2 - all->parameter->map_size_x/2 + j - 1, "%c",
                     cara);
            j++;
            attroff(COLOR_PAIR(color));
        }
        i++;
    }
}

void put_form(all_t *all, char **form)
{
    int x = all->cur_form->pos_x;
    int y = all->cur_form->pos_y;
    for (int i = 0; form[i] != NULL; i++) {
        for (int j = 0; form[i][j] != '\0'; j++) {
            if (form[i][j] != ' ')
                all->map->map[y + i][x + j] = form[i][j];
        }
    }
}
