#include "lists.h"

/**
 * pop_listint - Delete the head node of a 'listint_t' linked list
 * @head: double pointer to head node of linked list
 * Return: the head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);

	return (n);
}
