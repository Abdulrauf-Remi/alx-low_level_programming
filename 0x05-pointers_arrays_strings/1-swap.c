#include "main.h"

/**
 * swap_int - Swap the value of two integer.
 * @a: First Integer.
 * @b: Second integer.
 */
void swap_int(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
