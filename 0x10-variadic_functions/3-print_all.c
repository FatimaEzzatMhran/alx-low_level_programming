#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/** print_all - Prints all types of arguments when specified
 * @format: a list of types of arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int x;
	int flag;
	char *string;
	va_list arguments;

	va_start(arguments, format);
	x = 0;
	while (format != NULL && format[x] !='\0')
	{
		switch (format[x])
		{
			case 'c':
				printf("%c", va_arg(arguments, int));
				flag = 0;
				break;
			case 'i':
				printf("%i", va_arg(arguments, int));
				flag = 0;
				break;
			case 'f':
				printf("%f", va_arg(arguments, double));
				flag = 0;
				break;
			case 's':
				string = va_arg(arguments, char*);
				if (string == NULL)
					string = "(nill)";
				printf("%s", string);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (format[x + 1] != '\0' && flag == 0)
			printf(", ");
		x++;
	}
	printf("\n");
	va_end(arguments);
}
