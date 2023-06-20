#include "main.h"

/**
 * print_alphabet_x10 - prototype print alphabet x10
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int i;

	i = 0;

		while (i < 10)
		{
			alphabet = 'a';
				while (alphabet <= 'z')
				{
					_putchar(alphabet);
					alphabet++;
				}
			_putchar('\n');
			i++;
		}
}
