#include "lists.h"

/**
 * free_listint - free a `listint_t` list
 * @head: double pointer of linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
