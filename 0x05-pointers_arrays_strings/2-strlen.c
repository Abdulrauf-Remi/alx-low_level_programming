#include "main.h"

/**
 * _strlen - Return the length of a string.
 * @*s: The string in question.
 *
 * Return: The lenght of *s.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}
