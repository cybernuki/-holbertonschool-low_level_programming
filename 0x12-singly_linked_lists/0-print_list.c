#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: is the node head.
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t numNodes = 0;
	const list_t *node = h;

	while (node != NULL)
	{
		numNodes++;
		if (node->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", node->len, node->str);
		}
		node = node->next;
	}
	return (numNodes);
}
