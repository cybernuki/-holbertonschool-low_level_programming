#include "lists.h"
/**
 * free_list - it frees a list_t
 * @head: is the head of the list_t
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		free_list(head->next);
		free(head->str);
		free(head);
	}
}
