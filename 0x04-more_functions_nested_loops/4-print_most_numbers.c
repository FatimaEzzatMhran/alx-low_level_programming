#include "main.h"

/**
 * print_most_numbers - Print the numbers from 0-9 followed by a new line
 * Description: Do not print 2 & 4
 * You can only use _putchar twice in your code
 * Return: void
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
	if (!(c == '2' || c == '4'))
	_putchar(c);
	}
	_putchar('/n');
}
