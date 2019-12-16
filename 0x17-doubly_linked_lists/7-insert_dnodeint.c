#include "lists.h"
/**
 * insert_dnodeint_at_index - Adds a node in a given position
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: a pointer to the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *position = *h, *new = NULL;

	new = malloc(sizeof(dlistint_t));

	if (!new)
		return (NULL);

	new->prev = NULL;
	new->next = NULL;
	new->n = n;

	if (!(*h) && idx == 0)
	{
		*h = new;
		return (new);
	}

	while (position && idx-- > 0)
		position = position->next;

	if (!position)
	{
		free(new);
		return (NULL);
	}
	else
	{
		new->next = position;
		new->prev = position->prev;
		position->prev->next = new;
		position->prev = new;
	}

	return (new);
}
