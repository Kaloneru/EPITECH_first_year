/*
** EPITECH PROJECT, 2021
** my_strncpy
** File description:
** copies n character of a string into another
*/

int my_strlen(char const *src);

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (i <= n - 1) {
        dest[i] = src[i];
        i += 1;
    }
    if (n > my_strlen(src))
        dest[i] = '\0';
    return dest;
}
