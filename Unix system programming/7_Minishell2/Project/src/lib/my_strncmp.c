/*
** EPITECH PROJECT, 2022
** my_strncmp.c
** File description:
** compare a string with the start of another
*/

int my_strncmp(char *a, char *b, int nb)
{
    int i = 0;

    while (a[i] != '\0' && b[i] != '\0' && i != nb) {
        if (a[i] == b[i])
            i++;
        else
            return 1;
    }
    return 0;
}
