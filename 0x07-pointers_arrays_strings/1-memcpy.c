#include "main.h"

/**
 * _memcpy - copies n bytes from memory area @src.
 * @dest: The memory area to copy to.
 * @src: The memory area to copy to @dest.
 * @n: The number of bytes to be copied.
 *
 * Return: A pointer to the memory area @dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src;
	}
	return (dest);
}
