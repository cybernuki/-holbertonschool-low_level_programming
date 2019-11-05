#include "lists.h"

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
