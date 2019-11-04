#include "lists.h"
/**
 * print_listint - Prints a listint_t list
 * @h: is a node of the listin_t
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		nodes++;
		h = h->next;
	}
	return (nodes);
}
