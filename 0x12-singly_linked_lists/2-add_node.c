#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * _strlen - function that returns the length of a string.
 * @s : s is a character
 * Return: value is i
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * add_node - add a new node at the beginnig of list_t list
 * @head: double pointer to head
 * @str: string to be saved in new node, must be duplicated
 * Return: Address of new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *first_node;

	if (head == NULL)
		return (NULL);

	first_node = (list_t *) malloc(sizeof(list_t));
	if (first_node == NULL)
	{
		free(first_node);
		return (NULL);
	}

	first_node->str = strdup(str);
	if (first_node->str == NULL)
	{
		free(first_node);
		return (NULL);
	}
	first_node->len = _strlen(str);
	first_node->next = *head;
	*head = first_node;

	return (*head);
}
