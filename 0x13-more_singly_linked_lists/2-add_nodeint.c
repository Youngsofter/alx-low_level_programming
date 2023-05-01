#include "lists.h"

/**
 * add_nodeint - adds a new node at the start of a linked list
 * @first_node: pointer to the initial node in the list
 * @value: data to insert in the new node
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **first_node, const int value)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->next = *first_node;
	*first_node = new_node;

	return (new_node);
}

