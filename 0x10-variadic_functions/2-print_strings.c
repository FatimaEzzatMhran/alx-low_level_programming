#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - print a string followed by a newline
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *string;
	unsigned int x;
	va_list arguments;

	va_start(arguments, n);
	if (separator == NULL)
		separator = "";

	for (x = 0; x < n; x++)
	{
		string = va_arg(arguments, char*);
		if (string == NULL)
			string == "(nil)";
		printf("%s", string);
		if (x < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(arguments);
}
