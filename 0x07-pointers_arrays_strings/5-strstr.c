#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strstr - function that locates a substring.
 * @haystack: finds the first occurrence of the substring needle
 * @needle: in the string haystack
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
int len_needle = 0, i = 0, j;
while (needle[i] != '\0')
{
len_needle++;
i++;
}
while (*haystack)
{
for (j = 0; needle[j]; j++)
{
if (needle[j] != haystack[j])
{
break;
}
}
if (j != len_needle)
{
haystack++;
}
else
{
return (haystack);
}
}
return (NULL);
}
