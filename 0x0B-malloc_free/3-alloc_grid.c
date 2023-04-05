#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - function that returns a
 * pointer to a 2 dimensional array of integers.
 * @width: number of rows in array
 * @height: number of coulmns in array
 * Return: Null if the rows or columns
 * less than or equal 0
 * return array equal to 0 on success
 */
int **alloc_grid(int width, int height)
{
int **two_dim;
int i, j;
if (width <= 0 || height <= 0)
{
return (NULL);
}
two_dim = malloc(sizeof(int *) * (height));
if (two_dim == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
two_dim[i] = malloc(sizeof(int) * width);
if (two_dim[i] == NULL)
{
for (; i >= 0; i--)
{
free(two_dim[i]);
}
free(two_dim);
return (NULL);
}
}
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
{
two_dim[i][j] = 0;
}
}
return (two_dim);
}
