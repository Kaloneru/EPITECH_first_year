/*
** EPITECH PROJECT, 2021
** my_putlongnbr.c
** File description:
** my put long nbr
*/

int my_putchar(char c);

long int my_putlongnbr(int nb)
{
    long int nb2 = nb;

    if (nb2 < 0) {
        my_putchar('-');
        nb2 = nb2 * (-1);
    }
    if (nb2 >= 10)
        my_putlongnbr((nb2 / 10));
    my_putchar((nb2 % 10) + '0');
    return (0);
}
