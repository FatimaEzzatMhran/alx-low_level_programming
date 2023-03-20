#include "main.h"
/**
 * _abs - compute the absolute value of an integer
 * @n: integer to be computed
 * Return: absolute value of the integer
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
