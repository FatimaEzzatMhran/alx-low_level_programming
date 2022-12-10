#include <stdio.h>
/**
 * main - main block
 * Descriptoin: Print all numbers of base 16 in lowercase
 * You can only use putchar for 3 times
 * Return: 0
 */
int main(void)
{
	int num;
	char c;

	for (num = 0; num < 10; num++)
		putchar (num + '0');

	for (c = 'a'; c <= 'f'; c++)
		putchar (c);

	putchar('\n');

	return (0);
}
