/*
** EPITECH PROJECT, 2021
** my_compute_square_root
** File description:
** returns sqrt of arg if its an int
*/

int my_compute_square_root(int nb)
{
    int nb2 = nb / 2;
    int lim = 1;
    int return_value = 0;

    if (nb <= 0)
        return 0;
    while (lim <= nb2) {
        if (lim * lim == nb) {
            return_value = lim;
        }
        lim += 1;
    }
    return return_value;
}
