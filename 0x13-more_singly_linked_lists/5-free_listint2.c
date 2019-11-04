#include "lists.h"
/**
 * free_listint2 - free a list and set head to NULL
 * @head: is the head of the list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	free_listint(*head);
	*head = NULL;
}

/**
 * free_listint - free a list
 * @head: is the head of the list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free_listint(head->next);
		free(head);
	}
}
