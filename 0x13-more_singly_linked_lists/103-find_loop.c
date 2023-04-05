#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 *                     a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 * Return: If there is no loop - NULL.
 * Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tor, *h;

	if (head == NULL || head->next == NULL)
		return (NULL);

	tor = head->next;
	h = (head->next)->next;

	while (h)
	{
		if (tor == h)
		{
			tor = head;

			while (tor != h)
			{
				tor = tor->next;
				h = h->next;
			}

			return (tor);
		}

		tor = tor->next;
		h = (h->next)->next;
	}

	return (NULL);
}
