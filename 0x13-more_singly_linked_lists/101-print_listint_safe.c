#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *slow = head, *fast = head;
    size_t count = 0;

    while (slow != NULL && fast != NULL && fast->next != NULL)
    {
        printf("[%p] %d\n", (void *)slow, slow->n);
        count++;

        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            printf("[%p] %d\n", (void *)slow, slow->n);
            count++;

            slow = slow->next;

            while (slow != fast)
            {
                printf("[%p] %d\n", (void *)slow, slow->n);
                count++;
                slow = slow->next;
            }

            printf("-> [%p] %d\n", (void *)slow, slow->n);
            count++;
            break;
        }
    }

    if (slow == NULL || fast == NULL)
    {
        while (head != NULL)
        {
            printf("[%p] %d\n", (void *)head, head->n);
            count++;
            head = head->next;
        }
    }

    return (count);
}