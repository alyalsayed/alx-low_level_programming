#include <stdio.h>

/**
 * print_triangle - draws a triangle using multiple terminal lines and #'s.
 * @size: the height of the triangle.
 */
void print_triangle(int size)
{
int i, j, c;
if (size <= 0)
{
putchar('\n');
}
else
{
for (i = 0; i < size; i++)
{
for (j = i + 1; j < size; j++)
{
putchar(' ');
}
for (c = 0; c <= i; c++)
{
putchar('#');
}
putchar('\n');
}
}
}
