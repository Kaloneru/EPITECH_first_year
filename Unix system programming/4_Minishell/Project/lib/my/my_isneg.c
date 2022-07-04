/*
** EPITECH PROJECT, 2021
** my_isneg
** File description:
** verifies if the given number is positive
*/

int my_putchar(char c);

int my_isneg(int n)
{
    if (n < 0)
        my_putchar('N');
    else
        my_putchar('P');
    return (0);
}
