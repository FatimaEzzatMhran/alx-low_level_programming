#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - print all elements of list_t list
 * @h: head of linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *temp;
	size_t count = 0;

	temp = h;
	while (temp != NULL)
	{
		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", temp->len, temp->str);
		}
		count++;
		temp = temp->next;
	}
	return (count);
}

