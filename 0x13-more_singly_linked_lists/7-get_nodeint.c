#include "lists.h"

/**
 * get_nodeint_at_index - Get the nth node of a `listint_t` linked list
 * @head: pointer to head node
 * @index: index to find in linked list, starting at 0
 * Return: pointer to node or NULL if failed
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int x;

	if (head == NULL)
		return (NULL);

	temp = head;
	x = 0;
	while (x < index)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
		x++;
	}
	return (temp);
}
