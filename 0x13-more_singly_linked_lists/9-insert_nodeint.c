#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a specified position
 * @first_node_ptr: pointer to the first node in the list
 * @index: index where the new node is added
 * @value: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **first_node_ptr, unsigned int index, int value)
{
	unsigned int counter;
	listint_t *new_node;
	listint_t *current_node = *first_node_ptr;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !first_node_ptr)
		return (NULL);

	new_node->n = value;
	new_node->next = NULL;

	if (index == 0)
	{
		new_node->next = *first_node_ptr;
		*first_node_ptr = new_node;
		return (new_node);
	}

	for (counter = 0; current_node && counter < index; counter++)
	{
		if (counter == index - 1)
		{
			new_node->next = current_node->next;
			current_node->next = new_node;
			return (new_node);
		}
		else
			current_node = current_node->next;
	}

	return (NULL);
}

