#include "main.h"

/**
 * _strstr - Finds the first occurance of the substring in a string.
 * @haystack: The sring to be searched.
 * @neddle: The substring to search for in @haystack.
 *
 * Return: A pointer to the begining of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *neddle)
{
	int i;

	while (*haystack)
	{
		for (i = 0; neddle[i]; i++)
		{
			if (haystack[i] == neddle[i])
				return (haystack[i]);
		}
	}

	return ('\n');
}
