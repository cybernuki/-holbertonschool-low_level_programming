#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of the list
 * @head: head of the list
 * @n: number to be assigned to the new node.
 * Return: the direction to the new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *actual_node = *head;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		while (actual_node->next != NULL)
			actual_node = actual_node->next;
		actual_node->next = new;
	}
	return (new);
}
