/*
** EPITECH PROJECT, 2022
** my_defender game
** File description:
** display score and money
*/

#include "../../include/include.h"

char *my_mem_number(int nb)
{
    char *res;
    int tmp = nb;
    int neg = 0;
    int digit = 0;
    int i = 0;

    for (;tmp > 9; digit++)
        tmp = tmp / 10;
    digit++;
    i = digit + neg;
    res = malloc(sizeof(char) *(i + 1));
    res[i] = '\0';
    i--;
    for (; nb > 9; i--) {
        res[i] = nb % 10 + '0';
        nb = nb / 10;
    }
    res[i] = nb + '0';
    return res;
}

static void init_score(all_t *all)
{
    all->credit->pos_credit.x = 1800;
    all->credit->pos_credit.y = 0;
    all->credit->font = sfFont_createFromFile("Glasoor_FF_4F.ttf");
    all->credit->text = sfText_create();
    sfText_setFont(all->credit->text, all->credit->font);
    sfText_setPosition(all->credit->text, all->credit->pos_credit);
    sfText_setCharacterSize(all->credit->text, 40);
}

static void display_score(sfRenderWindow *window, all_t *all)
{
    int x = all->global_values->score;
    sfText_setString(all->credit->text, my_mem_number(x));
    sfRenderWindow_drawText(window, all->credit->text, NULL);
}

static void display_money(sfRenderWindow *window, all_t *all)
{
    int x = all->global_values->money;
    all->credit->pos_credit.y = 50;
    sfText_setPosition(all->credit->text, all->credit->pos_credit);
    sfText_setString(all->credit->text, my_mem_number(x));
    sfRenderWindow_drawText(window, all->credit->text, NULL);
}

void score(all_t *all, sfRenderWindow *window)
{
    init_score(all);
    display_score(window, all);
    display_money(window, all);
}
