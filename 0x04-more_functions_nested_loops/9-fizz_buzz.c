#include <stdio.h>

/**
 * main - Print number 1 to 100 and for multiples of 3 it print Fizz,
 *	  for multiples of 5 it print Buzz, for both 3 and 5 it print
 *	  FizzBuzz.
 * Return: 0 Always.
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", num);
		}
		if (num == 100)
			continue;
		printf(" ");
	}
	printf("\n");

	return (0);
}
