#include "lists.h"
#include <stdio.h>
/**
 * reverse_listint - Reverse a `listint_t` linked list
 * @head: double pointer to head
 * Description: Limited to going through loop only once.
 * Not allowed to use `malloc` or `free` or arrays
 * Can only declare a max of 2 variables.
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp;
	listint_t *replacement;

	if (*head == NULL)
		return (NULL);

	temp = *head;
	*head = temp->next;
	replacement = (*head)->next;
	temp->next = NULL;
	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	while (replacement != NULL)
	{
		(*head)->next = temp;
		temp = *head;
		*head = replacement;
		replacement = (*head)->next;
	}

	(*head)->next = temp;
	return (*head);
}
