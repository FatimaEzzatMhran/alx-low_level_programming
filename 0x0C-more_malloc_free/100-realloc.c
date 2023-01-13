#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocate a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: the size in bytes of the allocated space for ptr
 * @new_size: the new size in bytes of the new memory block
 * Return: pointer allocate new size memory or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *a;
	char *old_ptr;
	unsigned int i;

	old_ptr = ptr;
	if (new_size == old_size)
		return (ptr);
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		a = malloc(new_size);
		if (a == NULL)
			return (NULL);
		return (a);
	}
	a = malloc(new_size);
	if (a == NULL)
		return (NULL);
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			a[i] = old_ptr[i];
	}
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			a[i] = old_ptr[i];
	}
	free(ptr);
	return (a);
}
