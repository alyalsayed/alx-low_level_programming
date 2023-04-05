#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatinate two string
 * @s1: the destenation string
 * @s2: the source string
 * Return: empty string if two strings point to null
 * the concatinate string on success
 */
char *str_concat(char *s1, char *s2)
{
char *newly;
int len1 = 0, len2 = 0, index = 0, size = 0, con_index = 0;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
while (s1[index] != '\0')
{
len1++;
index++;
}
index = 0;
while (index[s2] != '\0')
{
len2++;
index++;
}
size = len1 + len2;
newly = malloc(sizeof(char) * (size + 1));
if (newly == NULL)
{
return (NULL);
}
for (index = 0; s1[index]; index++)
{
newly[con_index] = s1[index];
con_index++;
}
for (index = 0; s2[index]; index++)
{
newly[con_index] = s2[index];
con_index++;
}
return (newly);
}
