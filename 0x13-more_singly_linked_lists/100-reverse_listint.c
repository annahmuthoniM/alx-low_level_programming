#include "lists.h"

/**
 * reverse_listint - it  reverses a linked list
 * @head: it just points to the first node in the list
 * Return: points the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ex = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = ex;
		ex = *head;
		*head = next;
	}

	*head = next;

	return (*head);
}
