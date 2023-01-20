#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - print each number with separator, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of args passed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arguments;

	va_start(arguments, n);
	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arguments, int));
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arguments);
}
