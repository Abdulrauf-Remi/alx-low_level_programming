#include <stdio.h>
/**
 * main - Print the alphabet in lower case using putchar function
 *
 * Return: 0
 */
int main(void)
{
	int ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
