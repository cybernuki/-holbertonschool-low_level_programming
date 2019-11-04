#include "lists.h"
/**
 * listint_len - Prints a listint_t list
 * @h: is a node of the listin_t
 * Return: number of nodes.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
