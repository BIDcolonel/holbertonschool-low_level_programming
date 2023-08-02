#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a
 * dlistint_t list
 * @h: Pointer to a pointer to the head of the list
 * @idx: Index of the position where the new node should be
 * inserted (starting from 0)
 * @n: Value to be stored in the new node
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	dlistint_t *current = *h;

	unsigned int count = 0;

	new_node->n = n;

	if (h == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;

		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (current != NULL)
	{
		if (count == idx - 1)
		{
			new_node->next = current->next;
			if (current->next != NULL)
				current->next->prev = new_node;
			current->next = new_node;
			new_node->prev = current;
			return (new_node);
		}
		count++;
		current = current->next;
	}
	return (NULL);
}
