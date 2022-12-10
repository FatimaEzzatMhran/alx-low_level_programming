#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible different combinations of two digits
 * range from 0-99
 * seperated by a comma followed by a space after two number
 * can only use putchar upto 8 times max
 * Not allowed to use any variable of type char
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i <= 98; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			putchar((i / 10) + '0');
			putchar((i % 10) + '0');
			putchar(' ');
			putchar((j / 10) + '0');
			putchar((j % 10) + '0');

			if (i == 98 && j == 99)
				continue;
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
