#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - Function that frees memory created in 4-new_dog.c
 * @d: Input struct
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
