#include "lists.h"
/**
 * get_dnodeint_at_index - find the given index node in the double linked list
 * @head: head of the list
 * @index: index of the node
 * Return: a pointer to the index'th node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head && i++ < index)
		head = head->next;
	return (head);
}
