#include "main.h"

/**
 * print_diagonal - Draws a diagonal line using the \ character.
 * @n: The number of \ characters to be printed.
 */
void print_diagonal(int n)
{
	int idk, space;

	if (n > 0)
	{
		for (idk = 0; idk < n; idk++)
		{
			for (space = 0; space < idk; space++)
				_putchar(' ');
			_putchar('\\');

			if (idk == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
