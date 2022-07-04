/*
** EPITECH PROJECT, 2021
** my_put_nbr.c
** File description:
** my_put_nbr
*/

int my_putchar(char c);

int my_put_nbr(int nb)
{
    int nb2 = nb;

    if (nb2 < 0) {
        my_putchar('-');
        nb2 = nb2 * (-1);
    }
    if (nb2 >= 10)
        my_put_nbr((nb2 / 10));
    my_putchar((nb2 % 10) + '0');
    return (0);
}
