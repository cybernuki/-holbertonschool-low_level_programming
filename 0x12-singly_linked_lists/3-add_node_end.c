#include "lists.h"
/**
 * add_node_end - creates a new node at the end of the linked list
 * @head: is the reference to the head;
 * @str: is the string to be saved
 * Return: a node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node = NULL, *actualNode;

	actualNode = *head;
	if (actualNode == NULL)
		node = add_node(&actualNode, str);

	while (actualNode != NULL)
		actualNode = actualNode->next;

	node = add_node(&actualNode, str);
	return (node);
}
/**
 * add_node - creates a new node at the end of the linked list
 * @head: is the reference to the head;
 * @str: is the string to be saved
 * Return: a node
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
