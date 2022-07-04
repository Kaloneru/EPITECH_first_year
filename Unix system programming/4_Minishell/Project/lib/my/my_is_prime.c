/*
** EPITECH PROJECT, 2021
** my_is_prime
** File description:
** is a number prime ?
*/

int my_is_prime(int nb)
{
    int lim = 2;
    int return_value = 0;

    if (nb <= 1)
        return 0;
    while (lim <= nb / 2) {
        if (nb % lim == 0) {
            return_value += 1;
            return 0;
        }
        lim += 1;
    }
    if (return_value == 0)
        return 1;
    else
        return 0;
}
