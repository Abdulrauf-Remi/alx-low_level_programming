/**
 * main - Printf
 *
 * Return: 0
 */
#include <stdio.h>
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of long long int: %zu byte(s)", sizeof(long long int));
	printf("Size of float: %zu byte(s)", sizeof(float));

	return (0);
}
