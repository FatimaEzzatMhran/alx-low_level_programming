#include "main.h"

/**
 * print_triangle - print a triangle followed by a new line
 * Description: use _putchar, use the character # to print triangle
 * @size: size of the triangle, if size <=0 print only a new line
 */
void print_triangle(int size)
{
	int column, spaces, hashes;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (column = 1; column <= size; column++)
		{
			for (spaces = size - column; spaces >= 1; spaces--)
			{
				_putchar(' ');
			}
			for (hashes = 1; hashes <= column; hashes++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
