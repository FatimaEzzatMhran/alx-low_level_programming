#include "lists.h"

/**
 * sum_listint - get the sum of all the data (n) of a 'listint_t' list
 * @head: pointer to head
 * Return: sum of all data (n)
 */
int sum_listint(listint_t *head)
{
	int result;
	listint_t *temp;

	if (head == NULL)
		return (0);

	result = 0;
	temp = head;

	while (temp != NULL)
	{
		result += temp->n;
		temp = temp->next;
	}
	return (result);
}
