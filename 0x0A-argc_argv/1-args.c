#include <stdio.h>
/**
 * main - print number of arguments
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: zero on success
 */
int main(int argc, char *argv[])
{
int i;
if (argc == 1)
{
printf("%d\n", argc - 1);
}
else
{
for (i = 0; *argv; i++, argv++)
;
printf("%d\n", i - 1);
}
return (0);
}
