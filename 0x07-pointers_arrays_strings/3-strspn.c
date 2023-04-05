#include "main.h"
#include <stdio.h>
/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: The string in which the characters of string s are searched
 * @accept: Another string, the characters of this string are searched in s
 * Return: number of bytes was matched
 */
unsigned int _strspn(char *s, char *accept)
{
int len = 0, i, j;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] != ' ')
{
for (j = 0; accept[j] != '\0'; j++)
{
if (s[i] == accept[j])
{
len++;
}
}
}
else
{
return (len);
}
}
return (len);
}
