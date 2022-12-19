#include "main.h"
/**
 * puts_half - Prints half of a string, followed by a new line
 * Description: Print the second half of the string
 * If the number of chars is odd, the fun should print the last n chars of
 * the strint where n = (length_of_the_string - 1)/2
 * @str: string
 */
void puts_half(char *str)
{
	int i = 0, n;

	while (str[i] != '\0')
		i++;
	if (i + 1 % 2 != '0')
		n = (i - 1) / 2;
	else
		n = (i / 2);
	n++;

	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
