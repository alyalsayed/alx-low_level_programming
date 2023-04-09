#include "main.h"

/**
 * flip_bits - Returns the number of bits to flip to get from n to m
 * @n: unsigned long int input
 * @m: unsigned long int input
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor_result = n ^ m;

	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}

