#include "lists.h"
/**
 * add_dnodeint_end - adds a node in a double linked list at the beggining
 * @head: head of the list
 * @n: value of the node
 * Return: a pointer to the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *index = *head;

	new = malloc(sizeof(dlistint_t));

	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (!(*head))
	{
		*head = new;
	}
	else
	{
		while (index->next)
		{
			index = index->next;
		}
		new->prev = index;
		index->next = new;
	}
	return (new);
}
