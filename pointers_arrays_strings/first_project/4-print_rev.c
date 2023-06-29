#include "main.h"

/**
 * print_rev - Prints a string in reverse
 * @s: The string
 */
void print_rev(char *s)
{
	int len = 0;
	char *index = s;

	while (*index != '\0')
	{
		len++;
		index++;
	}

	for (; len > 0; len--)
	{
		index--;
		_putchar(*index);
	}

	_putchar('\n');
}
