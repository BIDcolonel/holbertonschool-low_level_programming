#include "main.h"

/**
 * print_line - Draws a straight line using the character _.
 * @n: The number of _ characters to be printed.
 */
void print_line(int n)
{
	int idk;

	if (n > 0)
	{
		for (idk = 0; idk < n; idk++)
			_putchar('_');
	}

	_putchar('\n');
}
