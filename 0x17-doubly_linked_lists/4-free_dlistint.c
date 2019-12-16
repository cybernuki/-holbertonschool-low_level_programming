#include "lists.h"
/**
 * free_dlistint - Free a double linked list
 * @head: head of the list
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	if (head)
	{
		while (head->next)
			head =  head->next;

		while (head)
		{
			tmp = head->prev;
			free(head);
			head = tmp;
		}
	}
}
