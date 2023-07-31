#include "lists.h"
/**
 * add_nodeint_end - it adds a node at the end of a linked list
 * @head: it points to the first element in the list
 * @n: just data to insert in the new element
 * Return: pointer to NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *good;
	listint_t *stand = *head;

	good = malloc(sizeof(listint_t));
	if (!good)
		return (NULL);

	good->n = n;
	good->next = NULL;

	if (*stand == NULL)
	{
		*stand = good;
		return (good);
	}

	while (stand->next)
		stand = stand->next;

	stand->next = good;

	return (good);
}
