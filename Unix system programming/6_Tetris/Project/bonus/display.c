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
    if (all->map->map[i][j] == '+' || all->map->map[i][j] == '-' || all->map->map[i][j] == '|')
        color = 6;
    if (all->map->map[i][j] == ' ')
        color = 7;
    return color;
}

void put_next_form(all_t *all, char **form)
{
    for (int i = 0; form[i] != NULL; i++) {
        for (int j = 0; form[i][j] != '\0'; j++) {
            if (form[i][j] != ' ')
                mvprintw(LINES/2 - all->parameter->map_size_y/2 + i - 1,
                         COLS/2 - all->parameter->map_size_x/2 + j + 25, "%c",
                         form[i][j]);
        }
    }
}

void set_and_draw(sfSprite *sprite, sfIntRect rect, sfRenderWindow *window)
{
    sfSprite_setTextureRect(sprite, rect);
    sfRenderWindow_drawSprite(window, sprite, NULL);
}

void put_all(all_t *all, int y, int x)
{
    sfVector2f pos = {x * 50 * all->csfml->scales, y * 50 * all->csfml->scales};
    sfSprite_setPosition(all->csfml->sprites, pos);
    int form = coloration(all, y, x, 0);
    set_and_draw(all->csfml->sprites, all->csfml->sprite_rect[form], all->csfml->window);
}

int put_map(all_t *all, sfRenderWindow *window)
{
    int x = 0;
    int y = 0;

    while (all->map->map[y] != NULL) {
        x = 0;
        while (all->map->map[y][x] != '\0') {
            put_all(all, y, x, window);
            x++;
        }
        y++;
    }

    return 0;
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
