#include "lists.h"
#include <stdio.h>

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: double pointer to head
 * @idx: insert node at this index, starting count at 0
 * @n: value to store in node
 * Return: Address of new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (NULL);

	new = (listint_t *) malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	i = 0;
	if (idx != 0)
	{
		temp = *head;
		while (i < idx - 1)
		{
			temp = temp->next;
			i++;
		}
		if (temp == NULL)
			return (NULL);
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
