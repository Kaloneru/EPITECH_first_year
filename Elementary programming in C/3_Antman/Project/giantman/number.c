/*
** EPITECH PROJECT, 2022
** number.c
** File description:
** deal with the number in the end of the string given
*/
#include "../include/antman.h"
int str_to_int(char *str);

static int rows2(char *str)
{
    int y = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '.')
            y++;
    }
    return (y + 1);
}

static char **str_to_word_array2(char *str)
{
    char **tab = mem_alloc_2d_char_array(rows2(str), my_strlen(str));
    int i = 0;
    int j = 0;
    int k = 0;
    while (str[i] != '\0') {
        if (str[i] == '.') {
            i++;
            j++;
            k = 0;
        }
        tab[j][k] = str[i];
        i++;
        k++;
    }
    return (tab);
}

static int arr_len(char **array)
{
    int i = 0;

    while (array[i] != NULL)
        i++;
    return i;
}

static int *str_to_int_array(char **array, giantman_t *giant)
{
    int *result = malloc(sizeof(int) * arr_len(array));
    int i = 0;
    int j = 0;
    int k = 0;
    giant->len_arr_int = 0;
    while (array[i] != NULL) {
        result[j] = str_to_int(array[i]);
        giant->len_arr_int++;
        i++;
        j++;
    }
    return (result);
}

int *number(giantman_t *giant)
{
    int *result = malloc(sizeof(char) * giant->x);
    result = str_to_int_array(str_to_word_array2(giant->array[giant->x]), giant);
    return result;
}

//x c le nombre de mots
