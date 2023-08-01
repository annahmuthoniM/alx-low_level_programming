#include "lists.h"

/**
 * find_listint_loop - it finds the loop in a linked list
 * @head: linked list to the start
 * Return: address of the NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *little = head;
	listint_t *first = head;

	if (!head)
		return (NULL);

	while (little && first && fast->next)
	{
		first = first->next->next;
		little = little->next;
		if (first == little)
		{
			little = head;
			while (little != first)
			{
				little = little->next;
				first = first->next;
			}
			return (firstt);
		}
	}

	return (NULL);
}
