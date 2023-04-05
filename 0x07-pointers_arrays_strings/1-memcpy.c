#include "main.h"
#include <stdio.h>
/**
 * _memcpy - function that copies memory area.
 * @dest: pointer to desitnation array
 * @src: pointer to the sorce array
 * @n: number of bytes to be copied from source to destination
 * Return: destenation
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}
