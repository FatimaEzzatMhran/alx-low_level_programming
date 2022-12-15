#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * Description: _putchar , the line should end with a \n
 * If n <= 0 , line end with \n
 * @n: The number of times the character _ should be printed
 * Return: void
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
