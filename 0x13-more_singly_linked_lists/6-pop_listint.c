#include "lists.h"

/**
 * pop_listint - removes the head node of a linked list
 * @first_node: pointer to the first element in the linked list
 *
 * Return: the data inside the element that was removed,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **first_node)
{
	listint_t *temp_node;
	int value;

	if (!first_node || !*first_node)
		return (0);

	value = (*first_node)->n;
	temp_node = (*first_node)->next;
	free(*first_node);
	*first_node = temp_node;

	return (value);
}

