#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible different combinations of three digits
 * in ascednding order, seperated by a comma followed by a space
 * can only use putchar 6 times max
 * Not allowed to use any variable of type char
 * Return: 0
 */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 8; i++)
	{
		for (j = i + 1; j < 9; j++)
		{
			for (k = j + 1; k < 10; k++)
			{
				putchar((i % 10) + '0');
				putchar((j % 10) + '0');
				putchar((k % 10) + '0');

			if (i == 7 && j == 8 && k == 9)
				continue;
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
