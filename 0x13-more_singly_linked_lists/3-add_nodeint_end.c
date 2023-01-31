#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a `listint_t` list
 * @head: double pointer to head node
 * @n: int value to store in new node
 * Return: Address of new element or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *temp;

	new_node = (listint_t *) malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = new_node;
	return (new_node);
}
