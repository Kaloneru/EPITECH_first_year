/*
** EPITECH PROJECT, 2022
** score.c
** File description:
** runner
*/
#include "include/ouais.h"
#include "include/include.h"

char *recup_score(all_t *all)
{
    int nb = all->score;
    char *score = malloc(sizeof(char) * 4);

    if (nb >= 10) {
        score[0] = (nb / 10) + '0';
        score[1] = (nb % 10) + '0';
        score[2] = '0';
        score[3] = '\0';
    }
    if (nb < 10) {
        score[0] = nb + '0';
	score[1] = '0';
        score[2] = '\0';
    }
    return score;
    free(score);
}

void display_score(sfRenderWindow *window, all_t *all)
{
    char *score = recup_score(all);
    char *text = malloc(sizeof(char) * my_strlen(score + 1));

    text[0] = '\0';
    my_strcat(text, "score: ");
    my_strcat(text, score);
    sfText_setString(all->text, text);
    sfRenderWindow_drawText(window, all->text, NULL);
}
