#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0
 * Return: 0
 */
void times_table(void)
{
	int first_number, second_number, result;

	for (first_number = 0; first_number <= 9; first_number++)
	{
		_putchar('0');

		for (second_number = 1; second_number <= 9; second_number++)
		{
			_putchar(',');
			_putchar(' ');

			result = first_number * second_number;

			if (result <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');

			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
