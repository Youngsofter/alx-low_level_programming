#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @first_node: pointer to the first element in the list
 * @value: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **first_node, const int value)
{
	listint_t *new_node;
	listint_t *current_node = *first_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->next = NULL;

	if (*first_node == NULL)
	{
		*first_node = new_node;
		return (new_node);
	}

	while (current_node->next)
		current_node = current_node->next;

	current_node->next = new_node;

	return (new_node);
}

