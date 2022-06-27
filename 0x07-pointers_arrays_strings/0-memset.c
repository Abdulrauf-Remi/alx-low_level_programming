#include "main.h"

/**
 * memset - Fills the first n bytes of the memory area
 * 	    pointed to by @s with the constant byte @c.
 * @s: A pointer to the memory are to be filled.
 * @b: The constant to fill the memory area .
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the filled memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	value = b;

	for (index = 0; index < n; index++)
	{
		s[index] = value;
	}
	return (s);
}
