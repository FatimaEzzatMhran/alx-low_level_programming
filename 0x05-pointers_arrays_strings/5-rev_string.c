#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: string
 */
void rev_string(char *s)
{
	int l, i;
	char *begin_ptr, *end_ptr, ch;

	l = _strlen(s);

	begin_ptr = s;

	end_ptr = s + l - 1;
	for (i = 0; i < (l - 1) / c; i++)
	{
		ch = *end_ptr;
		*end_ptr = *begin_ptr;
		*begin_ptr = ch;

		begin_ptr++;
		end_ptr--;
	}
}
