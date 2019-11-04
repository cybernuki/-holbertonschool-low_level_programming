#include "lists.h"
/**
 * pop_listint - takes the value of the head and remove the node to the list
 * @head: is the first node of the list
 * Return: the value of the first node or 0 if it is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *delete = *head;
	int n = 0;

	if (*head != NULL)
	{
		n = delete->n;
		*head = delete->next;
		free(delete);
	}
	return (n);
}
