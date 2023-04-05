#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -  function that returns a pointer
 * to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: the string whihc will be copied
 * Return: copied string
 * NULL if the string point to NULL
 */
char *_strdup(char *str)
{
char *s;
int i, len = 0, index = 0;
if (str == NULL)
{
return (NULL);
}
while (str[index] != '\0')
{
len++;
index++;
}
s = malloc(sizeof(char) * (len + 1));
if (s == NULL)
{
return (NULL);
}
for (i = 0; i < len; i++)
{
s[i] = str[i];
}
s[len] = '\0';
return (s);
}
