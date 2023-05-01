#include "lists.h"

/**
 * free_listint2 - releases a linked list
 * @first_node_ptr: pointer to the listint_t list to be released
 */
void free_listint2(listint_t **first_node_ptr)
{
	listint_t *temp_node;

	if (first_node_ptr == NULL)
		return;

	while (*first_node_ptr)
	{
		temp_node = (*first_node_ptr)->next;
		free(*first_node_ptr);
		*first_node_ptr = temp_node;
	}

	*first_node_ptr = NULL;
}

