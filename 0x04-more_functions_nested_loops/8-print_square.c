#include "main.h"

/**
 * print_square - Print a square follewd by a new line.
 * @size: The size of the square.
 */
void print_square(int size)
{
	int w, h;

	if (size > 0)
	{
		for (w = 0; w < size; w++)
		{
			for (h = 0; h < size; h++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}

	_putchar('\n');
}
