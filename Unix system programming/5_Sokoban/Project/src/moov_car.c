/*
** EPITECH PROJECT, 2022
** moov_car.c
** File description:
** moov the cararater
*/
#include "../include/include.h"

void moov_right(inf_t *inf)
{
    if (inf->map[inf->pos[0]][inf->pos[1] + 1] == 'X') {
        if (inf->map[inf->pos[0]][inf->pos[1] + 2] == ' ' ||
            inf->map[inf->pos[0]][inf->pos[1] + 2] == 'O') {
            inf->map[inf->pos[0]][inf->pos[1]] = ' ';
            inf->map[inf->pos[0]][inf->pos[1] + 1] = 'P';
            inf->map[inf->pos[0]][inf->pos[1] + 2] = 'X';
            inf->pos[1]++;
        }
    } else {
        inf->map[inf->pos[0]][inf->pos[1]] = ' ';
        inf->pos[1]++;
        inf->map[inf->pos[0]][inf->pos[1]] = 'P';
    }
}

void moov_high(inf_t *inf)
{
    if (inf->map[inf->pos[0] - 1][inf->pos[1]] == 'X') {
        if (inf->map[inf->pos[0] - 2][inf->pos[1]] == ' ' ||
            inf->map[inf->pos[0] - 2][inf->pos[1]] == 'O') {
            inf->map[inf->pos[0]][inf->pos[1]] = ' ';
            inf->map[inf->pos[0] - 1][inf->pos[1]] = 'P';
            inf->map[inf->pos[0] - 2][inf->pos[1]] = 'X';
            inf->pos[0]--;
        }
    } else {
        inf->map[inf->pos[0]][inf->pos[1]] = ' ';
        inf->pos[0]--;
        inf->map[inf->pos[0]][inf->pos[1]] = 'P';
    }
}

void moov_low(inf_t *inf)
{
    if (inf->map[inf->pos[0] + 1][inf->pos[1]] == 'X') {
        if (inf->map[inf->pos[0] + 2][inf->pos[1]] == ' ' ||
            inf->map[inf->pos[0] + 2][inf->pos[1]] == 'O') {
            inf->map[inf->pos[0]][inf->pos[1]] = ' ';
            inf->map[inf->pos[0] + 1][inf->pos[1]] = 'P';
            inf->map[inf->pos[0] + 2][inf->pos[1]] = 'X';
            inf->pos[0]++;
        }
    } else {
        inf->map[inf->pos[0]][inf->pos[1]] = ' ';
        inf->pos[0]++;
        inf->map[inf->pos[0]][inf->pos[1]] = 'P';
    }
}

void moov_left(inf_t *inf)
{
    if (inf->map[inf->pos[0]][inf->pos[1] - 1] == 'X') {
        if (inf->map[inf->pos[0]][inf->pos[1] - 2] == ' ' ||
            inf->map[inf->pos[0]][inf->pos[1] - 2] == 'O') {
            inf->map[inf->pos[0]][inf->pos[1]] = ' ';
            inf->map[inf->pos[0]][inf->pos[1] - 1] = 'P';
            inf->map[inf->pos[0]][inf->pos[1] - 2] = 'X';
            inf->pos[1]--;
        }
    } else {
        inf->map[inf->pos[0]][inf->pos[1]] = ' ';
        inf->pos[1]--;
        inf->map[inf->pos[0]][inf->pos[1]] = 'P';
    }
}
