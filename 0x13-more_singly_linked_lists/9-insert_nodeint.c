#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked
 * @head: pointer to the first node
 * @idx: index where new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int t;
	listint_t *good;
	listint_t *stand = *head;

	good = malloc(sizeof(listint_t));
	if (!good || !head)
		return (NULL);

	good->n = n;
	good->next = NULL;

	if (idx == 0)
	{
		good->next = *head;
		*head = good;
		return (good);
	}

	for (t = 0; stand && t < idx; t++)
	{
		if (t == idx - 1)
		{
			good->next = stand->next;
			mktemp->next = good;
			return (good);
		}
		else
			stand = stand->next;
	}

	return (NULL);
}
