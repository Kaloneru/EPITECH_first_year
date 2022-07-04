/*
** EPITECH PROJECT, 2021
** display.c
** File description:
** display
*/

#include "printf.h"
#include "navy.h"

int display(player_t *player)
{
    my_printf("my positions:\n");
    my_printf(" |A B C D E F G H\n");
    my_printf("-+---------------\n");
    for (int i = 0; i != 8; i++) {
        my_printf("%d|", 1 + i);
        for (int j = 0; j != 8; j++)
            my_printf("%c ", player->map[i][j]);
        my_printf("\n");
    }
    my_printf("\nenemy's positions:\n");
    my_printf(" |A B C D E F G H\n");
    my_printf("-+---------------\n");
    for (int i = 0; i != 8; i++) {
        my_printf("%d|", 1 + i);
        for (int j = 0; j != 8; j++)
            my_printf("%c ", player->enemy[i][j]);
        my_printf("\n");
    }
    my_printf("\n");
    return (0);
}
