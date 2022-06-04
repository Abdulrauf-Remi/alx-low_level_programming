/**
 * main - Printf
 *
 * Return: 0
 */
#include <stdio.h>
int main(void)
{
	int intType;
	char charType;
	float floatType;
	long int long intType;
	long long int long long intType;
	printf("Size of a char: %lu byte(s)\n", sizeof(charType));
	printf("Size of an int: %lu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
