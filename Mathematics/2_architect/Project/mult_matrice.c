/*
** EPITECH PROJECT, 2021
** mult_matrice.c
** File description:
** 102architect
*/

//multipie une matrice de 3col par 3line par une matrice de 3col 1line
int **mult(int **matrice01, int **matrice02)
{
    int final_matrice[3][1];

    final_matrice[0][0] = matrice01[0][0] * matrice02[0][0] + matrice01[0][1] * matrice02[1][0] + matrice01[0][2] * matrice02[2][0];
    final_matrice[1][0] = matrice01[1][0] * matrice02[0][0] + matrice01[1][1] * matrice02[1][0] + matrice01[1][2] * matrice02[2][0];
    final_matrice[2][0] = matrice01[2][0] * matrice02[0][0] + matrice01[2][1] * matrice02[1][0] + matrice01[2][2] * matrice02[2][0];
    return final_matrice;
}
