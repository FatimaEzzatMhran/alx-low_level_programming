#include "main.h"
/**
 * print_alphabet_x10 - print alphabet in lowecase 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char letter;

	while (count < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
		count++;
	}
}
