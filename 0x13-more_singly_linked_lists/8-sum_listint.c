#include "lists.h"

/**
 * sum_listint - computes the sum of all the data in a listint_t list
 * @first_node: initial node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *first_node)
{
	int total_sum = 0;
	listint_t *current_node = first_node;

	while (current_node)
	{
		total_sum += current_node->n;
		current_node = current_node->next;
	}

	return (total_sum);
}

