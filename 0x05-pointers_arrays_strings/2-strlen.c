#include "main.h"

/**
 * _strlen - Return the length of a string.
 * @str: The string in question.
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; *s[len] != '\0'; ++len)
		return (len);
}
