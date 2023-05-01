#include "lists.h"

/**
 * listint_len - returns the count of elements in a linked list
 * @list: linked list of type listint_t to traverse
 *
 * Return: count of nodes
 */
size_t listint_len(const listint_t *list)
{
	size_t node_count = 0;

	while (list)
	{
		node_count++;
		list = list->next;
	}

	return (node_count);
}

