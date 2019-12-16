#include "lists.h"
/**
 * sum_dlistint - get the sum of all of the values stored in
 *                the double linked list
 * @head: head of the list
 * Return: the sum of nodes values
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
