/*
** EPITECH PROJECT, 2021
** my_strncat
** File description:
** works now
*/

int my_strlen(char const *str);

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = my_strlen(dest);
    int d = 0;

    nb += i;
    while (i < nb && src[d] != '\0') {
        dest[i] = src[d];
        i += 1;
        d += 1;
    }
    dest[i] = '\0';
    return dest;
}
