#include "main.h"
/**
 * clear_bit - set bit value to 0 at a given index
 * @n: number int
 * @index: bit position in 0-index
 * Return: bit value or -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1 << index);
	return (1);
}
