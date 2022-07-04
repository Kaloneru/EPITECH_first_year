/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** Navy main
*/

#include "printf.h"
#include "navy.h"

game_t *game;

int check(player_t *player)
{
    int x = 0;

    for (int i = 0; i != 8; i++)
        for (int j = 0; j != 8; j++)
            if ((player->map[i][j]) == 'x')
                x = x + 1;
    return (x);
}

char *attack(player_t *player)
{
    char *buffer;
    size_t bufsize = 3;

    buffer = (char *)malloc(bufsize * sizeof(char));
    while (1) {
        my_printf("attack: ");
        getline(&buffer, &bufsize, stdin);
        if (buffer[0] > '@' && buffer[0] < 'I' && buffer[1] > '0' &&
        buffer[1] < '9')
            break;
        else
            my_printf("wrong position\n\n");
    }
    send_coord(player, buffer[0] - 65, buffer[1] - 48);
    return (buffer);
}

char *hit_or_missed(player_t *player, char *atk)
{
    if (game->hit == 1) {
        player->enemy[atk[1] - 49][atk[0] - 65] = 'x';
        player->victory++;
        return ("hit");
    }
    if (game->miss == 1) {
        player->enemy[atk[1] - 49][atk[0] - 65] = 'o';
        return ("missed");
    }
    return ("error");
}

int navy(int argc, char **argv, player_t *player)
{
    int victory;

    init();
    if (argc == 2) {
        player_one(player, argv);
        victory = start_game_one(player);
    }
    if (argc == 3) {
        player_two(player, argv);
        victory = start_game_two(player, argv);
    }
    display(player);
    my_printf((victory == 0 ? "I Won\n" : "Enemy won\n"));
    return (victory);
}

int main(int argc, char **argv)
{
    player_t *player = malloc(sizeof(player_t));
    int x = 0;

    game = malloc(sizeof(game_t));
    if (error_handling(argc, argv) == 1)
        return (84);
    else if (argv[1][0] == '-' && argv[1][1] == 'h')
        help();
    else
        x = navy(argc, argv, player);
    return (x);
}
