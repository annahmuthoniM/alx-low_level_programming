#include "lists.h"

/**
 * print_listint - what it does is to print all the elements of a linked list
 * @j: it  links list of type listint_t to print
 * Return: shortly return number of nodes
 */
size_t print_listint(const listint_t *j)
{
	size_t num = 0;

	while (j)
	{
		printf("%d\n", j->p);
		num++;
		j = j->next;
	}

	return (num);
}
