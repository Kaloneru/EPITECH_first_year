/*
** EPITECH PROJECT, 2022
** my_str_to_word_array.c
** File description:
** desc
*/

#include "../../include/my_rpg.h"
/*
static int rows(char *str, char separator)
{
    int y = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == separator)
            y++;
    }
    return (y + 1);
}

static int spaces(char *str, char separator)
{
    int w = 0;
    int j = 0;

    while (str[w] == separator) {
        j++;
        w++;
    }
    return (j);
}
*/
char **mem_alloc_2d_char_array(int rows, int columns)
{
    int i = 0;
    char **arr = malloc(sizeof(char *) * (rows + 1));

    while (i < rows) {
        arr[i] = malloc(columns);
        i++;
    }
    return (arr);
}
/*
char **my_str_to_word_array(char *str, char sep)
{
    if (str == NULL)
        return (NULL);
    char **tab = mem_alloc_2d_char_array(rows(str, sep), my_strlen(str) + 2);
    int i = spaces(str, sep), j = 0, k = 0;

    while (str[i] != '\0') {
        if (str[i] == sep) {
            tab[j][k] = '\0';
            i++;
            j++;
            k = 0;
        }
        tab[j][k] = str[i];
        i++;
        k++;
    }
    tab[j + 1] = NULL;
    return tab;
}
*/

static int count_words(char const *str, char const delim)
{
    int len = my_strlen(str);
    int i = 0, count = 0;

    for (; str[i] == delim; i++);
    for (int j = len - 1; j >= 0; j--) {
        while (str[j] == delim) {
            len--;
            j--;
        }
        break;
    }
    for (; i < len; i++) {
        if (str[i] != delim)
            continue;
        count++;
        while (str[i + 1] == delim)
            i++;
    }
    return (count + 1);
}

char **my_str_to_word_array(char const *str, char const delim)
{
    int pos = 0, len = 0, array_len = count_words(str, delim);
    char **words = malloc(sizeof(char *) * (array_len + 1));

    for (int i = 0; i < array_len + 1; i++)
        words[i] = NULL;
    for (int i = 0; i < array_len; i++) {
        while (str[pos] == delim)
            pos++;
        while (str[pos] != delim && str[pos] != '\0') {
            len++;
            pos++;
        }
        words[i] = malloc(sizeof(char) * len + 1);
        words[i][len] = '\0';
        for (int j = 0; j < len; j++)
            words[i][j] = str[(pos - len) + j];
        len = 0;
    }
    return (words);
}
