#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a specific index in a linked list
 * @first_node: initial node in the linked list
 * @index: index of the node to return
 * Return: pointer to the desired node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *first_node, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *current_node = first_node;

	while (current_node && counter < index)
	{
		current_node = current_node->next;
		counter++;
	}

	return (current_node ? current_node : NULL);
}

