#include "lists.h"
/**
 * add_nodeint - add a node of listint_t at the beggining
 * @head: is the first node of the list
 * @n: is the number to be assigned
 * Return: the new node added on the list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
