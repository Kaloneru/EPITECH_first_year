/*
** EPITECH PROJECT, 2021
** my_put_nbr
** File description:
** doesnt work
*/

void my_putchar(char c);

void my_put_nbr(int nb)
{
    unsigned int n = nb;
    if (nb < 0) {
        my_putchar('-');
        n = -nb;
    }
    if (n > 9) {
        my_put_nbr(n / 10);
        my_put_nbr(n % 10);
    } else {
        my_putchar(n + '0');
    }
}
