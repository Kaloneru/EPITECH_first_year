/*
** EPITECH PROJECT, 2022
** antman.c
** File description:
** main
*/

#include "antman.h"

char **str_to_word_array(char *str)
{
    char **tab = mem_alloc_2d_char_array(rows(str), my_strlen(str));
    int i = spaces(str);
    int j = 0;
    int k = 0;

    while (str[i] != '\0') {
        if (str[i] == ' ') {
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

char *open_and_read(char const *filepath)
{
    struct stat sb;
    int fd = open(filepath, O_RDONLY);
    int ret = stat(filepath, &sb);
    int buff_size = sb.st_size;
    char *buff = malloc(sizeof(char *) * buff_size);;

    if (ret == -1)
        return (NULL);
    read(fd, buff, buff_size);
    buff[buff_size - 1] = '\0';
    close(fd);
    return (buff);
}

void antman(antman_t *ant)
{
    if (ant->filetype == '1')
        text(ant);
    if (ant->filetype == '2')
        image(ant);
    if (ant->filetype == '3')
        text(ant);
}

void init(antman_t *ant, char **av)
{
    ant->filepath = av[1];
    ant->filetype = av[2][0];
    ant->index = 0;
}

int main(int ac, char **av)
{
    antman_t *ant = malloc(sizeof(antman_t));

    if (ac != 3)
        return (84);
    else {
        init(ant, av);
        antman(ant);
    }
    return (0);
}
