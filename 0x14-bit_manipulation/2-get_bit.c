#include "main.h"
/**
 * get_bit - returns bit value at given index
 * @n: number int
 * @index: bit position in 0-index
 * Return: bit value or -1 if failed
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
