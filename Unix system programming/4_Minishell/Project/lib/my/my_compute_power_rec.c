/*
** EPITECH PROJECT, 2021
** my_compute_power_rec
** File description:
** returns arg1 to the power of arg2
*/

int my_compute_power_rec(int nb, int p)
{
    int a = p;
    int result = nb;

    if (p == 0)
        return 1;
    if (p < 0)
        return 0;
    if (a == 1)
        return result;
    result = result * my_compute_power_rec(nb, a - 1);
    if (result > 2147483647 || result < -2147483647)
        return 0;
    else
        return result;
}
