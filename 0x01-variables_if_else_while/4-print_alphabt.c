#include <stdio.h>
/**
 * main - Print the alphabet in lower case except q and e using putchar function
 *
 * Return: 0
 **/
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if(ch == 'e')
		{
			continue;
		}
		
		if(ch == 'q')
		{
			continue;
		}
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
