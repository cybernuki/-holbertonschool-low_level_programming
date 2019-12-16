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
	dlistint_t *position = *h, *backup, *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->prev = NULL;
	new->next = NULL;
	new->n = n;
	if (idx == 0)
	{
		*h = new;
		if (position)
		{
			new->next = position;
			position->prev = new;
		}
		return (new);
	}
	while (position && idx-- > 0)
	{
		backup = position;
		position = position->next;
	}
	if (!position)
	{
		if (idx != 0)
		{
			free(new);
			return (NULL);
		}
		else
		{
			backup->next = new;
			new->prev = backup;
		}
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
