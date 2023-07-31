#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 * Return: 1 (Success)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *stand = *head;
	listint_t *current = NULL;
	unsigned int t = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(stand);
		return (1);
	}

	while (t < index - 1)
	{
		if (!stand || !(stand->next))
			return (-1);
		stand = stand->next;
		t++;
	}
	current = stand->next;
	stand->next = current->next;
	free(current);

	return (1);
}
