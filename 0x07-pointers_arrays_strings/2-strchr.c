#include "main.h"

/**
 * _strchr - Locates a character in a string.
 * @s: The string to locate character from.
 * @c: The character in question.
 *
 * Return: The first occurrence of thr character c in the string s,
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i)
	{
		if (s[i] == c)
		{
			return (s[i]);
		}
		else
			return (NULL);
	}
}
