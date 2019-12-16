#include "lists.h"
/**
 * delete_dnodeint_at_index - removes a node in a given position
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *to_delete = *head;

	if (!(*head))
		return (-1);
	if (index == 0)
	{
		*head = to_delete->next;
		free(to_delete);
		return (1);
	}

	while (to_delete && index-- > 0)
		to_delete = to_delete->next;

	if (!to_delete)
		return (-1);
	to_delete->prev->next = to_delete->next;
	to_delete->next->prev = to_delete->prev;
	free(to_delete);
	return (1);
}
