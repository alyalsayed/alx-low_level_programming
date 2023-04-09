#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to print in binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int bits = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (bits <= n >> 1)
		bits <<= 1;

	while (bits)
	{
		if ((bits & n) == 0)
			_putchar('0');
		else
			_putchar('1');

		bits >>= 1;
	}
}
