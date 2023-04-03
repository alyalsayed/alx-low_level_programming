#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list and returns its data.
 * @head: Pointer to a pointer to the head of the list.
 *
 * Return: The data of the deleted head node, or 0 if the list is empty.
 */
int pop_listint(listint_t **head)
{
    listint_t *current;
    int n;

    if (*head == NULL)
        return (0);

    current = *head;
    *head = (*head)->next;
    n = current->n;
    free(current);

    return (n);
}