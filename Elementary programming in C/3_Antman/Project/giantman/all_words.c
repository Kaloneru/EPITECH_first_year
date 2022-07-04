/*
** EPITECH PROJECT, 2022
** all_words.c
** File description:
** a bit like a str to word array
*/
#include "../include/antman.h"
/* char *ouais@ok@evan@111213 ->  char **ouais, ok, evan, 111213   */
void all_words(giantman_t *giant)
{
    int col = 0;
    int line = 0;
    int i = 0;

    giant->x = 0;
    while (giant->str[i] != '\0') {
        if (giant->str[i] == '@') {
            i++;
            col = 0;
            line++;
            giant->x++;
        } else {
            giant->array[line][col] = giant->str[i];
            i++;
            col++;
        }
    }
}




/*uchar / 2
char1 = uchar >> 4
    char2 = uchar << 4
    char 2 = uchar >> 4
*/
