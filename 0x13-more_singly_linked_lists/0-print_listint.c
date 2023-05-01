#include "lists.h"

/**
 * print_listint - displays all the elements of a linked list
 * @list: linked list of type listint_t to display
 *
 * Return: count of nodes
 */
size_t print_listint(const listint_t *list)
{
	size_t node_count = 0;

	while (list)
	{
		printf("%d\n", list->n);
		node_count++;
		list = list->next;
	}

	return (node_count);
}

