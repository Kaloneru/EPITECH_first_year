/*
** EPITECH PROJECT, 2021
** key.c
** File description:
** key
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int **mem_alloc_2d_int_array(int rows, int columns)
{
    int i = 0;
    int **arr = (int **)malloc(sizeof(int *) * rows);

    while (i < rows) {
        arr[i] = (int *)malloc(sizeof(int) * columns);
        i = i + 1;
    }
    return (arr);
}

int tab(int j, int matrix_size)
{
    if (j == matrix_size - 1)
        printf("\n");
    if (j < matrix_size - 1)
        printf("\t");
    return (0);
}

int **get_key(char *str)
{
    int key_size = strlen(str);
    int *key = (int *)malloc(sizeof(int *) * key_size);
    int matrix_size = ceil(sqrt(strlen(str)));
    int **matrix = mem_alloc_2d_int_array(matrix_size, matrix_size);
    int k = 0;

    for (int i = 0; str[i] != '\0'; i++)
        key[i] = str[i];
    printf("Key matrix:\n");
    for (int i = 0; i < matrix_size; i++) {
        for (int j = 0; j < matrix_size; j++) {
            matrix[i][j] = key[k];
            printf("%d", matrix[i][j]);
            tab(j, matrix_size);
            k++;
        }
    }
    printf("\n");
    return (matrix);
}

int get_rows(int message_size, int key_size)
{
    int rows;

    rows = (message_size / key_size);
    if (message_size % key_size != 0)
        rows = rows + 1;
    return (rows);
}

int **get_message(char *str, char *key)
{
    int key_size = ceil(sqrt(strlen(key)));
    int message_size = strlen(str);
    int *message = (int *)malloc(sizeof(int *) * message_size);
    int rows = get_rows(message_size, key_size);
    int **matrix = mem_alloc_2d_int_array(rows, key_size);
    int k = 0;

    for (int i = 0; str[i] != '\0'; i++)
        message[i] = str[i];
    printf("Encrypted message:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < key_size; j++) {
            matrix[i][j] = message[k];
            k++;
        }
    }
    return (matrix);
}
