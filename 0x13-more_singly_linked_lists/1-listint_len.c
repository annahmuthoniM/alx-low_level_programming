#include "lists.h"
/**
 * listint_len - the purpose is to return the number of elements in linked
 * @j: it links list of type listint_t to traverse
 * Return: total number of nodes
 */
size_t listint_len(const listint_t *j)
{
	size_t num = 0;

	while (j)
	{
		num++;
		j = j->next;
	}

	return (num);
}
