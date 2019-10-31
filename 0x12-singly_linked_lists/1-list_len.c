#include "lists.h"
#include <stdio.h>
/**
 * list_len - return the elements of a list_t list
 * @h: is the node head.
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t numNodes = 0;
	const list_t *node = h;

	while (node != NULL)
	{
		numNodes++;
		node = node->next;
	}
	return (numNodes);
}
