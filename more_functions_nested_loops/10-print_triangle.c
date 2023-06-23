#include "main.h"

/**
 * print_triangle - Prints a triangle, using the character #.
 * @size: The size of the triangle.
 */
void print_triangle(int size)
{
	int lower, power;

	if (size > 0)
	{
		for (lower = 1; lower <= size; lower++)
		{
			for (power = size - lower; power > 0; power--)
				_putchar(' ');

			for (power = 0; power < lower; power++)
				_putchar('#');

			if (lower == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
