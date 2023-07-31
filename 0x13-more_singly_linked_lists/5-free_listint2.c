#include "lists.h"
/**
 * free_listint2 - it frees a linked list
 * @head: it pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *stand;

	if (head == NULL)
		return;

	while (*head)
	{
		stand = (*head)->next;
		free(*head);
		*head = stand;
	}

	*head = NULL;
}
