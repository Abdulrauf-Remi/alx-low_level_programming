#include "main.h"

/**
 * _strspn - Gets the length of prefix substring.
 * @s: The string to searched for.
 * @accept: The prefix to be measured.
 *
 * Return: The nuber of bytes which contsist only bytes from @accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}

			else if (accept[i + 1] == '\0')
				return (bytes);
		}

		s++;
	}

	return (bytes);
}
