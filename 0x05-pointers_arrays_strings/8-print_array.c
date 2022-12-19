#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints n elements of an array of integers followed by new line
 * @a: int array
 * @n: integer
 * Description: Numbers must be separated by comma and space
 * Numbers should be displayed in the same order they are sorted in
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
		if (x != n - 1)
			printf("%d, ", a[x]);
		else
			printf("%d", a[x]);
	printf("\n");
}
