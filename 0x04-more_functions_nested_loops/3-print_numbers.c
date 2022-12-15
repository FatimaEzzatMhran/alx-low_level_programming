#include "main.h"

/**
 * print_numbers - Prints number from 0-9 followed by a new line
 * Description: you can use _putchar twice
 * Return: void
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
