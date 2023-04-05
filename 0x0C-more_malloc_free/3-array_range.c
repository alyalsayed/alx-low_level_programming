#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * array_range - creates an array of integers.
 * @min: start
 * @max: end
 * Return: array of integers
 */
int *array_range(int min, int max)
{
int *array, len = 0, i;
if (min > max)
{
return (NULL);
}
len = max - min + 1;
array = malloc(sizeof(int) * len);
if (array == NULL)
{
return (NULL);
}
for (i = 0; i < len; i++, min++)
{
array[i] = min;
}
return (array);
}
