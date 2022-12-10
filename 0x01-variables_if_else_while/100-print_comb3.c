#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible different combinations of two digits
 * The two digits must be different
 * can only use putchar 5 times max
 * Not allowed to use any variable of type char
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');

			if (i >= 0 && j >= 0)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
