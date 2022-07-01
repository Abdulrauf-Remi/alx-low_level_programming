#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers
 * @argc: The number of argument passed.
 * @argv: The array of argument passed.
 *
 * Return: 0 if program gets two argumrnts. 1 if otherwise.
 */
int main(int argc, char *argv[])
{
	int mul, n1, n2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	mul = n1 * n2;

	printf("d\n", mul);

	return (0);
}
