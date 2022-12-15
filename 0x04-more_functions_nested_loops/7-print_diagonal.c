#include "main.h"
/**
 * print_diagonal - Draws a diagonal line
 * Description: only _putchar
 * Should end with a \n , if n <= 0 print only \n
 * @n: the number of times charcter \ should be printed
 * Return: void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}

