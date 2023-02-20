#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print all numbers of base 16 of lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char low;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
	}
	for (low = 'a'; low <= 'f'; low++)
	{
		putchar(low);
	}
	putchar('\n');

	return (0);
}
