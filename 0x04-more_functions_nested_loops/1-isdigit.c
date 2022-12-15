#include "main.h"

/**
 * _isdigit - Checks for a digit (0 thorough 9)
 * @c: Char to be checked
 * Return: 1 if a c is a digit , else 0
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
