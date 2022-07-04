/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** other.c
*/

#include "../../include/my_rpg.h"

int set_hit_box(all_t *all, sfVector2f pos, char c)
{
    all->hit_box->hit_box_all[all->hit_box->hit_box].left = pos.x;
    all->hit_box->hit_box_all[all->hit_box->hit_box].top = pos.y;
    hit_box_one(all, pos, c);
    hit_box_two(all, pos, c);
    hit_box_three(all, pos, c);
    hit_box_four(all, pos, c);
    hit_box_five(all, pos, c);
    if (c == '1') {
        all->hit_box->hit_box_all[all->hit_box->hit_box].width = pos.x + 100;
        all->hit_box->hit_box_all[all->hit_box->hit_box].height = pos.y + 100;
    }
    all->hit_box->hit_box++;
    return 0;
}

void print_text_real_pnj(all_t *all, sfVector2f pos, char *string)
{
    sfText *text = sfText_create();
    sfFont *font = sfFont_createFromFile("res/ttf/oracles_bold.ttf");

    sfText_setString(text, string);
    sfText_setFont(text, font);
    sfText_setString(text, string);
    sfText_setPosition(text, pos);
    sfText_setCharacterSize(text, 25);
    sfText_setColor(text, sfBlack);
    sfRenderWindow_drawText(all->window->window, text, NULL);
}

int print_text_pnj(all_t *all, sfVector2f pos)
{
    if (pos.x > 800 && pos.x < 1200) {
        pos.y -= 70;
        pos.x -= 110;
        set_and_draw_pos(all->sheet->button,
        all->init->sprite55[48], all->window->window, pos);
        pos.y += 20;
        pos.x += 40;
        print_text_real_pnj(all, pos, "Bonjour");
    }
    return 0;
}

int put_pnj(all_t *all, sfVector2f pos, int i, int j)
{
    pos.x -= 50;
    pos.y -= 50;
    if (all->game->pnj[i][j] != ' ') {
        set_and_draw_pos(all->sheet->pnj,
        all->init->sprite55[all->game->pnj[i][j] - 33],
        all->window->window, pos);
        if (pos.y > 400 && pos.y < 800)
            print_text_pnj(all, pos);
    }
    return 0;
}

int put_elem(all_t *all, sfVector2f pos, int i, int j)
{
    set_and_draw_pos(all->sheet->ground,
    all->init->sprite55[all->game->map[i][j] - 33], all->window->window, pos);
    if (all->game->obj[i][j] != ' ')
        set_and_draw_pos(all->sheet->obj,
        all->init->sprite55[all->game->obj[i][j] - 33],
        all->window->window, pos);
    if (all->game->obj2[i][j] != ' ')
        set_and_draw_pos(all->sheet->obj,
        all->init->sprite55[all->game->obj2[i][j] - 33],
        all->window->window, pos);
    set_hit_box(all, pos, all->game->hit_box[i][j]);
    return 0;
}