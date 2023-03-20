#include "main.h"
/**
 * _islower - Return 1 if letter is lower case, 0 if not
 * @c: Character to be checked
 * Return: 1 if lowercase, 0 if else
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
