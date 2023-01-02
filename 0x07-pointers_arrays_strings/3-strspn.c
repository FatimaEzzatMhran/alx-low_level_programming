#include "main.h"

/**
 * _strspn - search a string for a set of bytes
 * @s: char strinf array
 * @accept: char array to check bytes with
 * Return: Number of bytes in the initial segment of 's'
 */

unsigned int _strspn(char *s, char *accept)
{
	int initial_length = 0;
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] != ' ')
		{
			for (y = 0; accept[y] != '\0'; y++)
			{
				if (s[x] == accept[y])
				initial_length++;
			}
		}
		else
			return (initial_length);
	}

	return (initial_length);
}
