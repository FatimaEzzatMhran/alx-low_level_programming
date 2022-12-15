#include "main.h"
/**
 * print_square - Prints a square followed by a new line
 * Description: Only use -putchar and use the charazter # to print the square
 * @size: The size of the square , if size <= 0 print only a new line
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
		_putchar('\n');

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
