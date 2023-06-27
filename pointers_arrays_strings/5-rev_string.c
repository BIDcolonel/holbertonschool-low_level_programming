#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: The string
 */
void rev_string(char *s)
{
	int lenght = 0, index = 0;
	char temporary;

	while (s[index++])
		lenght++;

	for (index = lenght - 1; index >= lenght / 2; index--)
	{
		temporary = s[index];
		s[index] = s[lenght - index - 1];
		s[lenght - index - 1] = temporary;
	}
}
