#include <stdio.h>
/**
 * main - print name of arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: zero on success
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
