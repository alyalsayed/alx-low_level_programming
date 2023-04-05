#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _realloc - reallocates a memory block using malloc and free.
 * @ptr:a pointer to the memory previously allocated
 * with a call to malloc: malloc(old_size)
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block.
 * Return: nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *p;
char *oldp = ptr;
unsigned int i, max = new_size;
if (ptr == NULL)
{
p = malloc(new_size);
return (p);
}
else if (new_size == 0)
{
free(ptr);
return (NULL);
}
else if (new_size == old_size)
{
return (ptr);
}
p = malloc(new_size);
if (p == NULL)
{
return (NULL);
}
if (new_size > old_size)
{
max = old_size;
}
for (i = 0; i < max; i++)
{
p[i] = oldp[i];
}
free(ptr);
return (p);
}
