#include "main.h"
#include <stdio.h>

/**
 * main - print the name of the file followed by a new line
 * @argc: argument count - instead of writing void(argc), we can
 *        do this in the function declaration
 *        int main(int __attribute__((unused)) argc, char *argv[])
 * @argv: argument vector - argment passed to main as an array or strings
 * Return: 0
 */

int main(int __attribute__((unused)) argc, char *argv[])
{
	(void)argc;

	printf("%s\n", argv[0];

	return (0);
}
