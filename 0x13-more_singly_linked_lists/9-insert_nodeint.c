#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position in a listint_t list.
 * @head: Pointer to a pointer to the head of the list.
 * @idx: The index of the list where the new node should be added (starting at 0).
 * @n: The data of the new node.
 *
 * Return: Pointer to the new node, or NULL if it failed to add the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
    listint_t *new_node, *current;
    unsigned int i;

    if (head == NULL)
        return (NULL);

    if (idx == 0)
        return (add_nodeint(head, n));

    current = *head;

    for (i = 0; current != NULL && i < idx - 1; i++)
        current = current->next;

    if (i != idx - 1)
        return (NULL);

    new_node = malloc(sizeof(listint_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = n;
    new_node->next = current->next;
    current->next = new_node;

    return (new_node);
}