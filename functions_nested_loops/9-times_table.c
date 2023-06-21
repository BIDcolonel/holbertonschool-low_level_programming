#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int number, multiplier, result;

	for (number = 0; number < 10; number++)
	{
		_putchar('0');

		for (multiplier = 1; multiplier < 10; multiplier++)
		{
			_putchar(',');
			_putchar(' ');

			result = number * multiplier;

			if (result < 10)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');

			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
