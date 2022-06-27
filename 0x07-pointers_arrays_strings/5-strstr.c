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

	if (*neddle == 0)
		return (haystack);

	while (*haystack)
	{
		index = 0;

		if (haystack[i] == neddle[i])
		{
			do {
				if (neddle[index + 1] == '\0')
					return (haystack);

				i++;

			} while (haystack[i] == neddle[index]);
		}

		haystack++;
	}

	return ('\0');
}
