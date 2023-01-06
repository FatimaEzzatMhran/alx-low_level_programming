#include "main.h"

/**
 * *_strncat - Concatenate two strings but it will use at most n bytes from src
 * @dest: string to concatenate to
 * @src: char string
 * @n: number of elements to concatenate in
 * Return: Pointer to resulting dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	j = 0;

	while (j < n && *(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	*(dest + i) = '\0';
	return (dest);
}
