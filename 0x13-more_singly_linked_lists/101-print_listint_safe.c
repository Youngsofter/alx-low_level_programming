#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * reallocate_node_array - reallocates memory for an array of pointers
 * to the nodes in a linked list
 * @node_array: the old node array to append
 * @size: size of the new node array (always one more than the old array)
 * @new_node: new node to add to the array
 *
 * Return: pointer to the new node array
 */
const listint_t **reallocate_node_array(const listint_t **node_array, size_t size, const listint_t *new_node)
{
	const listint_t **new_node_array;
	size_t index;

	new_node_array = malloc(size * sizeof(listint_t *));
	if (new_node_array == NULL)
	{
		free(node_array);
		exit(98);
	}
	for (index = 0; index < size - 1; index++)
		new_node_array[index] = node_array[index];
	new_node_array[index] = new_node;
	free(node_array);
	return (new_node_array);
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @first_node: pointer to the start of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *first_node)
{
	size_t index, node_count = 0;
	const listint_t **node_array = NULL;

	while (first_node != NULL)
	{
		for (index = 0; index < node_count; index++)
		{
			if (first_node == node_array[index])
			{
				printf("-> [%p] %d\n", (void *)first_node, first_node->n);
				free(node_array);
				return (node_count);
			}
		}
		node_count++;
		node_array = reallocate_node_array(node_array, node_count, first_node);
		printf("[%p] %d\n", (void *)first_node, first_node->n);
		first_node = first_node->next;
	}
	free(node_array);
	return (node_count);
}

