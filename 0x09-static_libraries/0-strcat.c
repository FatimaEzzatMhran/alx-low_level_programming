#include "main.h"

/**
 * *_strcat - Appends the src to the dest overwriting null byte ('\0')
 * at the end of dest and then adds a terminating null byte
 * @dest: char string to concatenate to
 * @src: char string
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}

	j = 0;

	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		j++;
		i++;
	}

	*(dest + i) = '\0';
	return (dest);
}
