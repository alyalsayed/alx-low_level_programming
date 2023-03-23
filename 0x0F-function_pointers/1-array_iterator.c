#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator -  function that executes a function
 *	given as a parameter on each element of an array.
 * @array: the array
 * @size: size of array
 * @action: function which print elements
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
	{
		return;
	}
	if (action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
