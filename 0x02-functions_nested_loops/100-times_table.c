#include "main.h"
/**
 * print_times_table - Print 'n' times table, starting with 0
 * Description: If 'n' is greater than 15 or less than 0, print nothing
 * @n: The value of the times table to be printed
 */
void print_times_table(int n)
{
	int first_number, second_number, result;

	if (n > 15 ||  n < 0)
		return;

	{
		for (first_number = 0; first_number <= n; first_number++)
		{

			for (second_number = 1; second_number <= n; second_number++)
			{
				result = first_number * second_number;

				if (result > 99)
				{
					_putchar((result / 100) + '0');
					_putchar(((result / 10) % 10) + '0');
					_putchar((result % 10) + '0');
				}
				else if (result > 9)
				{
					_putchar(' ');
					_putchar((result / 10) + '0');
					_putchar((result % 10) + '0');
				}
				else if (second_number != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(result + '0');
				}
				else if (second_number = 0)
				{
					_putchar('0');
					_putchar(',');
				}
				else
					_putchar(result + '0');

				if (second_number != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
