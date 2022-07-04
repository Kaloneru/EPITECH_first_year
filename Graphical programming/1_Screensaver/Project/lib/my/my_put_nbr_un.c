/*
** EPITECH PROJECT, 2021
** my_put_nbr_un.c
** File description:
** put_nbr but with unsigned int
*/
void my_putchar(char c);
void my_put_nbr_un(unsigned int nb)
{
    unsigned int n = nb;

    if (n > 9) {
        my_put_nbr_un(n / 10);
        my_put_nbr_un(n % 10);
    } else {
        my_putchar(n + '0');
    }
}
