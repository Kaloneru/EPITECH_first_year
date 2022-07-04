/*
** EPITECH PROJECT, 2022
** lyrics.c
** File description:
** lyrics
*/

#include "antman.h"
#include "printf.h"

int multiple(char **tab, int x)
{
    for (int i = 0; i != x; i++)
        if (str_compare(tab[x], tab[i]) == 0)
            return (0);
    return (1);
}

int check(antman_t *ant, char *dest)
{
    for (int i = 0; i != ant->index; i++)
        if (str_compare(dest, ant->array[i]) == 0)
            return (0);
    return (1);
}

void library(antman_t *ant, char *dest)
{
    if (check(ant, dest) == 1) {
        ant->array[ant->index] = dest;
        ant->index++;
    }
}

int index_finder(antman_t *ant, char *dest)
{
    int i = 1;

    for (int j = 0; j != ant->index; j++) {
        if (str_compare(dest, ant->array[j]) == 0) {
            i = j + 1;
            break;
        }
    }
    return (i);
}

void text(antman_t *ant)
{
    ant->str = open_and_read(ant->filepath);
    ant->tab = str_to_word_array(ant->str);
    ant->rows = rows(ant->str);
    ant->columns = my_strlen(ant->str);
    ant->array = mem_alloc_2d_char_array(ant->rows, ant->columns);
    ant->bitwise = malloc(sizeof(char) * my_strlen(ant->str));
    for (int i = 0; i != ant->rows; i++) {
        if (multiple(ant->tab, i) == 1) {
            my_printf("%s@", ant->tab[i]);
            library(ant, ant->tab[i]);
        }
    }
    for (int i = 0; i != ant->rows; i++)
        my_printf("%d.", index_finder(ant, ant->tab[i]));
}
