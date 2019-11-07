#include "lists.h"
/**
 * reverse_listint - Reverse a given listint_t
 * @head: is the pointer to the head
 * Return: head to the new reverse list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr = NULL, *next = NULL;

	if (!head || !*head)
		return (NULL);

	curr = *head;
	*head = NULL;
	while (curr)
	{
		next = curr->next;
		curr->next = *head;
		*head = curr;
		curr = next;
	}

	return (*head);
}
