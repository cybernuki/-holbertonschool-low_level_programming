#include "lists.h"
/**
 * add_node - creates a new node at the end of the linked list
 * @head: is the reference to the head;
 * @str: is the string to be saved
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
