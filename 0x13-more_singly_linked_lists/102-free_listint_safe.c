#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: Pointer to a pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
    listint_t *current, *temp;
    size_t count = 0;

    if (h == NULL)
        return (0);

    while (*h != NULL)
    {
        current = *h;
        *h = (*h)->next;
        count++;

        if (current <= *h)
        {
            free(current);
        }
        else
        {
            temp = *h;
            *h = current;
            free(temp);
        }
    }

    return (count);
}