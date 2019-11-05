#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a node at an specific index
 * @head: is the head of the list.
 * @idx: index where it must add the new node
 * @n: value of the new node.
 * Return: a pointer to the new node. NULL if it would not possible to add
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = NULL, *current_node = *head;
	unsigned int i = 0;

	if (!head)
		return (NULL);

	while (i <= idx && current_node)
	{
		if (i == (idx - 1))
		{
			new = malloc(sizeof(listint_t));
			if (new == NULL)
				return (NULL);

			new->n = n;
			new->next = current_node->next;
			current_node->next = new;
		}

		i++;
		current_node = current_node->next;
	}
	return (new);
}
