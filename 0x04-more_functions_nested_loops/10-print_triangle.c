#include "main.h"

/**
 * print_triangle - Print a triangle, followed bt a new line.
 * @size: THe size of Triangle to print.
 */
void print_triangle(int size)
{
	int h, s;

	if (size > 0)
	{
		for (h = 1; h <= size; h++)
		{
			for (s = size - h; s > 0; s--)
			{
				_putchar(' ');
			}
			for (s = 0; s < h; s++)
			{
				_putchar('#');
			}
			if (h == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
