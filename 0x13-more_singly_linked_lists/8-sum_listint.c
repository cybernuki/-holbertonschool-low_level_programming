#include "lists.h"
/**
 * sum_listint - sum all data in the list
 * @head: the head of the list
 * Return: sum of all data of the linked list, 0 if it is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
