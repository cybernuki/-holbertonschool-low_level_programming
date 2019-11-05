/**
 * free_listint - free a list
 * @head: is the head of the list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	if (head != NULL)
	{
		free_listint(head->next);
		free(head);
	}
}
