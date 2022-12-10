#include <stdio.h>
/**
 * main - main block
 * Description: Print all numbers of base 10, starting from 0.
 * You can only use the putchar function
 * Without char variable
 * num + '0' is the same as num + 48. When num = 0, the expression
 * evaluates to 48 so a 0 is outputted
 * Return: 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar (num + '0');
	putchar('\n');

	return (0);
}
