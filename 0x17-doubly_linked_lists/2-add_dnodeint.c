#include "lists.h"
/**
 * add_dnodeint - adds a node in a double linked list at the beggining
 * @head: head of the list
 * @n: value of the node
 * Return: a pointer to the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t new;

	new = malloc(sizeof(dlistint_t));

	if (!new)
	{
		return (Null);
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
		new->next = *head;
		*head->prev = new;
		*head = new;
	}
	return (new);
}
