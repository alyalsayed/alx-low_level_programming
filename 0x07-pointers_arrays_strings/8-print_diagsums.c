#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - print the sum of the two diagonals
 * of a square matrix
 * @a: the matrix
 * @size: the size of matrix
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
int i, main_sum = 0, second_sum = 0;
for (i = 0; i < size; i++)
{
main_sum += a[i];
a += size;
}
a -= size;
for (i = 0; i < size; i++)
{
second_sum += a[i];
a -= size;
}
printf("%d, %d\n", main_sum, second_sum);
}
