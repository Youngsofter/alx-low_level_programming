#include "lists.h"

/**
 * display_linked_list - displays all the elements in a linked list
 * @head: head node of type listint_t to be displayed
 *
 * Return: the count of nodes
 */
size_t display_linked_list(const listint_t *head)
{
	size_t node_count = 0;

	while (head)
	{
		printf("%d\n", head->n);
		node_count++;
		head = head->next;
	}

	return (node_count);
}

