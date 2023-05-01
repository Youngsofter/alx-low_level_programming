#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @first_node_ptr: pointer to the first node in the list
 *
 * Return: pointer to the first node in the reversed list
 */
listint_t *reverse_listint(listint_t **first_node_ptr)
{
	listint_t *previous_node = NULL;
	listint_t *next_node = NULL;

	while (*first_node_ptr)
	{
		next_node = (*first_node_ptr)->next;
		(*first_node_ptr)->next = previous_node;
		previous_node = *first_node_ptr;
		*first_node_ptr = next_node;
	}

	*first_node_ptr = previous_node;

	return (*first_node_ptr);
}

