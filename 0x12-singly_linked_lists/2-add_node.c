#include "lists.h"
/**
 *
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	int size = 0;

	node = malloc(sizeof(node));

	if (node == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

	node->str = strdup(str);
	node->len = size;
	node->next = *head;
	*head = node;
	return (node);
}
