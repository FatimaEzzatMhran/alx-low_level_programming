#include "main.h"
#include <stdio.h>
/**
 * main - main block
 * Description: Print the summ of all multiplies of or 5 below 1024
 * Return: 0
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum = sum + i;
	}

	printf("%d\n", sum);

	return (0);
}
