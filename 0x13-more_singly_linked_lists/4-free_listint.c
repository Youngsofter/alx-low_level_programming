#include "lists.h"

/**
 * free_listint - releases a linked list
 * @first_node: listint_t list to be released
 */
void free_listint(listint_t *first_node)
{
	listint_t *temp_node;

	while (first_node)
	{
		temp_node = first_node->next;
		free(first_node);
		first_node = temp_node;
	}
}

