/**
 * main - Printf
 *
 * Return: 0
 */
#include <stdio.h>
int main(void)
{
	int a;
	char b;
	float c;
	long int d;
	long long int e;
	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %zu byte(s)\n", (unsigned long)sizeof(e);
	return (0);
}
