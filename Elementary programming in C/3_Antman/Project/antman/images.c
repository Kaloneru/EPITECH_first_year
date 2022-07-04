/*
** EPITECH PROJECT, 2022
** images.c
** File description:
** images
*/

#include "antman.h"
#include "printf.h"

int image_rows(char *str)
{
    int i = 0;

    for (int j = 0; str[j] != '\0'; j++)
        if (str[j] == '\n')
            i++;
    return (i);
}

char **image_to_word_array(char *str)
{
    char **tab = mem_alloc_2d_char_array(image_rows(str), 12);
    int j = 0;
    int a = 0;
    int b = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n')
            j++;
        if (j != 3) {
	    tab[a][b] = str[i];
            b++;
        }
        if (j == 3) {
            a++;
            j = 0;
        }
    }
    return (tab);
}

void image(antman_t *ant)
{
    ant->str = open_and_read(ant->filepath);
    ant->tab = image_to_word_array(ant->str);
    my_printf("%s\n", ant->tab[0]);
}
