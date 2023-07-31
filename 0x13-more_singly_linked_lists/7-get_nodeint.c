#include "lists.h"

/**
 * get_nodeint_at_index - it returns the node at a certain index in a linked
 * @head: first node in linked list
 * @index: index of the node to return
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int t = 0;
	listint_t *stand = head;

	while (stand && t < index)
	{
		stand = stand->next;
		t++;
	}

	return (stand ? stand : NULL);
}
