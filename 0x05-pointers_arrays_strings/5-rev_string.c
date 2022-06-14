#include "main.h"

/**
 * rev_string - reverse string.
 * @s: The string to reverse.
 */
void revstring(char *s)
{
	int len = 0, index = 0;

	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
