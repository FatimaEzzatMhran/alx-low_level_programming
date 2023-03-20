#include "main.h"
/**
 * _isalpha - Return 1 if letter is alphabetic, 0 if not
 * @c: Character to be checked
 * Return: 1 if letter, 0 if else
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
		(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
