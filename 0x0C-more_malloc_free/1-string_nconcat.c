#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: the destination
 * @s2: the source
 * @n: nubmer of chars will be oncatenated
 * Return: concatenate string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
int index, i = 0, len = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (index = 0; s1[index]; index++)
{
len++;
}
ptr = malloc(sizeof(char) * (len + 1 + n));
if (ptr == NULL)
{
return (NULL);
}
for (index = 0; s1[index]; index++)
{
ptr[i] = s1[index];
i++;
}
for (index = 0; s2[index]; index++)
{
ptr[i] = s2[index];
i++;
}
ptr[i] = '\0';
return (ptr);
}
