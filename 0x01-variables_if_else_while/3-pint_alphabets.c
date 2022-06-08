#include <stdio.h>
/**
 * main - Print the alphabet in lower case using putchar function
 * 
 * Return: 0
 **/
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
