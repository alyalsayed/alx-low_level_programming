#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked -  function that allocates memory using malloc.
 * @b: size of memory wanted to be allocated
 * Return: 98 on failure and pointer to memory on success
 */
void *malloc_checked(unsigned int b)
{
void *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
