#include <string.h>
#include "main.h"
/**
 * binary_to_uint - converts binary number
 * to unsigned int
 * @b: pointer to string
 * Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	unsigned long int i;

	if (!b)
		return (0);

	for (i = 0; i < strlen(b); i++)
	{
		if (b[i] == '1' || b[i] == '0')
		{
			num <<= 1;
			if (b[i] == '1')
				num++;
		}
		else
			return (0);
	}
	return (num);
}
