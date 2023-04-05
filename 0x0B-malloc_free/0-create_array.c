#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char.
 * @size: the number of bytes you need
 * @c: the specific char
 * Return: 0 if the size equal null
 * else: return the string
 */
char *create_array(unsigned int size, char c)
{
char *s;
unsigned int i;
if (size == 0)
{
return (NULL);
}
s = malloc(sizeof(char) * size);
if (s == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
s[i] = c;
}
return (s);
}
