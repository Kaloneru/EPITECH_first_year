/*
** EPITECH PROJECT, 2021
** my_strlen
** File description:
** cpool day 4 task
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i = i + 1;
    return i;
}
