#include "lists.h"
/**
 * get_nodeint_at_index - get the nth node of the list
 * @head: is the head node of the list
 * @index: is the nth node to return
 * Return: the nth node of the list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = NULL;
	unsigned int i = 0;

	while (i <= index && head != NULL)
	{
		if (i == index)
		{
			node = head;
		}

		head = head->next;
		i++;
	}

	return (node);
}
