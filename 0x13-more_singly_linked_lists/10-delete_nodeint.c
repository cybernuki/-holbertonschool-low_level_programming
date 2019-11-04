#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at an specific index
 * @head: is the head of the list.
 * @index: index where it must deleted the new node
 * Return: a pointer to the new node. NULL if it would not possible to add
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node = *head, *delete;
	unsigned int i = 0;
	int is_delete = -1;


	if (i == index && current_node)
	{
		delete = *head;
		*head = (*head)->next;
		free(delete);
		is_delete = 1;
	}

	while (i <= index && current_node)
	{
		if (i == (index - 1))
		{
			delete = current_node->next;
			current_node->next = delete->next;

			is_delete = 1;
			free(delete);
			break;
		}
		i++;
		current_node = current_node->next;
	}
	return (is_delete);
}
