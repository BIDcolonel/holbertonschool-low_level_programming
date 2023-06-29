#include "main.h"

/**
 * puts2 - every other character of a string, starting with the first character
 * @str: the string
 */
void puts2(char *str)
{
	int index = 0, lenght = 0;

	while (str[index++])
		lenght++;

	for (index = 0; index < lenght; index = index + 2)
		_putchar(str[index]);

	_putchar('\n');

}
