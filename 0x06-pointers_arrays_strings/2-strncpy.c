#include "main.h"

/**
 * *_strncpy - Function that copies a string
 * @src: The source of strings
 * @dest: The destination of the string
 * @n: Length of int
 * Return: pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && *(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}

	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
