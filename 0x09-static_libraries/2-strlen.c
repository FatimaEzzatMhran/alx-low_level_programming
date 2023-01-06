#include "main.h"

/**
 * _strlen - Return the length of the string
 * @s: char type pointer
 * Return: length of string
 */
int _strlen(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		counter++;
		s++;
	}

	return (counter);
}
