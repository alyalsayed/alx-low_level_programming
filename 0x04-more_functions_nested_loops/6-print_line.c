#include <stdio.h>

/**
 * print_line - Draws a straight line using the character _.
 * @n: The number of _ characters to be printed.
 */

void print_line(int n)
{
if (n <= 0)
{
putchar('\n');
return;
}
while (n--)
{
putchar('_');
}
putchar('\n');
return;
}
