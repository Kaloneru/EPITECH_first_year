/*
** EPITECH PROJECT, 2022
** rpg
** File description:
** display_inventory.c
*/

#include <math.h>
#include "../../include/my_rpg.h"

static int verif_inventory_is_used(all_t *all)
{
    if (sfKeyboard_isKeyPressed(sfKeyE)) {
        if (all->glbv->display_inventory == 0)
            all->glbv->display_inventory = 1;
        else
            all->glbv->display_inventory = 0;
    }
    return 0;
}

static int show_inventory(all_t *all, sfSprite *sprite, sfVector2f i_pos)
{
    sfSprite_setPosition(sprite, i_pos);
    sfRenderWindow_drawSprite(all->window->window ,sprite, NULL);
    return 0;
}

static int put_case(all_t *all, sfVector2f i_pos)
{
    sfVector2f pos = {0, 0};
    for (int i = 1; i != 9; i++) {
        pos.y = i_pos.y + (i * 54) + 14;
        for (int j = 0; j != 11; j++) {
            pos.x = i_pos.x + (j * 53) + 8;
            show_inventory(all, all->game->inventory_case, pos);
        }
    }
    return 0;
}

char *my_revstr(char *str)
{

    int len = my_strlen(str) - 1;
    int swap1 = 0;
    char c;

    while (swap1 < len) {
        c = str[swap1];
        str[swap1] = str[len];
        str[len] = c;
        swap1 += 1;
        len -= 1;
    }
    return str;
}

int my_intlen(int i)
{
    int j = 0;
    if (i < 0)
        i = i * -1;
    for (;i > 0; j++)
        i = i / 10;
    return j;
}

char *int_to_str(int i)
{
    int verif = 0, j = 0, test = my_intlen(i);
    char *str = malloc(my_intlen(i));

    if (i == 0)
        return "0";
    if (i < 0) {
        verif = 1;
        i *= -1;
    }
    for (;j != test; j++) {
        str[j] = (i % 10) + '0';
        i /= 10;
    }
    if (verif == 1) {
        str[j] = '-';
        j++;
    }
    str[j] = '\0';
    return my_revstr(str);
}

static int display_gold(all_t *all, int gold, sfVector2f pos)
{
    set_and_draw_pos(all->sheet->obj,
    all->init->sprite55[all->glbv->display_money + 16],
    all->window->window, pos);
    pos.x += 50;
    pos.y += 10;
    print_text_real(all, pos, int_to_str(gold));
    return 0;
}

static int display_silver(all_t *all, int silver, sfVector2f pos)
{
    pos.x += 100;
    set_and_draw_pos(all->sheet->obj,
    all->init->sprite55[all->glbv->display_money + 11],
    all->window->window, pos);
    pos.x += 50;
    pos.y += 10;
    print_text_real(all, pos, int_to_str(silver));
    return 0;
}

static int display_bronze(all_t *all, int bronze, sfVector2f pos)
{
    pos.x += 200;
    set_and_draw_pos(all->sheet->obj,
    all->init->sprite55[all->glbv->display_money + 6],
    all->window->window, pos);
    pos.x += 50;
    pos.y += 10;
    print_text_real(all, pos, int_to_str(bronze));
    return 0;
}

static int display_money(all_t *all)
{
    sfSprite_setScale(all->sheet->obj, (sfVector2f){1, 1});
    if (all->glbv->time % 3 == 0)
        all->glbv->display_money++;
    if (all->glbv->display_money >= 5)
        all->glbv->display_money = 0;
    sfVector2f pos = {1600, 20};
    int gold = all->game->money / 100;
    int silver = (all->game->money % 100) / 10;
    int bronze = all->game->money % 10;
    display_gold(all, gold, pos);
    display_silver(all, silver, pos);
    display_bronze(all, bronze, pos);
    sfSprite_setScale(all->sheet->obj, (sfVector2f){2, 2});
    return 0;
}

static sfVector2f mod_pos(int x, int y, sfVector2f pos)
{
    pos.x += x;
    pos.y += y;
    return pos;
}

char *display_stats(char *str, int curr, int max)
{
    return (my_strcat(my_strcat(my_strcat(str, int_to_str(curr)),
    " / "), int_to_str(max)));
}

static int show_stats(all_t *all, sfSprite *sprite, sfVector2f i_pos)
{
    sfSprite_setPosition(sprite, i_pos);
    sfRenderWindow_drawSprite(all->window->window ,sprite, NULL);
    print_text_real(all, mod_pos(20, 100, i_pos),
    display_stats("PV : ", all->wrandrall->lifepoint_left,
    all->wrandrall->lifepoint));
    print_text_real(all, mod_pos(20, 170, i_pos),
    display_stats("MANA : ", all->wrandrall->mana_left,
    all->wrandrall->mana));
    print_text_real(all, mod_pos(20, 240, i_pos),
    display_stats("STAMINA : ", all->wrandrall->stamina_left,
    all->wrandrall->stamina));
    print_text_real(all, mod_pos(20, 310, i_pos),
    display_stats("DODGE CHANCE : ", all->wrandrall->dodge_chance, 100));
    print_text_real(all, mod_pos(20, 380, i_pos),
    my_strcat("LVL : ", int_to_str(all->wrandrall->lvl)));
    print_text_real(all, mod_pos(20, 450, i_pos),
    display_stats("XP : ", all->wrandrall->exp_needed_for_next_level,
    (10 * pow(1.4, all->wrandrall->lvl))));
    return 0;
}

static int use_inventory(all_t *all)
{
    if (all->glbv->display_inventory == 1) {
        show_inventory(all, all->game->inventory, all->game->inventory_pos);
        show_stats(all, all->game->stats, all->game->stats_pos);
        put_case(all, all->game->inventory_pos);
        display_money(all);
    }
    return 0;
}

int display_inventory(all_t *all)
{
    verif_inventory_is_used(all);
    use_inventory(all);
    return 0;
}
