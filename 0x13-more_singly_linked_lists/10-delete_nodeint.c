#include "lists.h"

/**
 * delete_nodeint_at_index - removes a node in a linked list at a specific index
 * @first_node_ptr: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **first_node_ptr, unsigned int index)
{
	listint_t *current_node = *first_node_ptr;
	listint_t *node_to_delete = NULL;
	unsigned int counter = 0;

	if (*first_node_ptr == NULL)
		return (-1);

	if (index == 0)
	{
		*first_node_ptr = (*first_node_ptr)->next;
		free(current_node);
		return (1);
	}

	while (counter < index - 1)
	{
		if (!current_node || !(current_node->next))
			return (-1);
		current_node = current_node->next;
		counter++;
	}

	node_to_delete = current_node->next;
	current_node->next = node_to_delete->next;
	free(node_to_delete);

	return (1);
}

