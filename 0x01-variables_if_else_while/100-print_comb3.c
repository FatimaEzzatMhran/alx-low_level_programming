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
	int i, j, k;

	for (i = 0; i < 100; i++)
	{
		j = i / 10;
		k = i % 10;

		putchar (j + '0');
		putchar (k + '0');

		if (i < 99)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
