#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a `listint_t` list
 * @head: double pointer to head node
 * @n: int value to store in new node
 * Return: Address of new element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *first_node;

	if (head == NULL)
		return (NULL);

	first_node = (listint_t *) malloc(sizeof(listint_t));
	if (first_node == NULL)
	{
		free(first_node);
		return (NULL);
	}

	first_node->n = n;
	first_node->next = *head;
	*head = first_node;

	return (*head);
}
