#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: the string to encode
 * Return: the encoded string
 */
char *leet(char *str)
{
	char *letter = "aAeEoOtTlL";
	char *number = "4433007711";
	int index, counter;

	for (index = 0; str[index] != '\0'; index++)
	{
		for (counter = 0; letter[counter] != '\0'; counter++)
		{
			if (str[index] == letter[counter])
				str[index] = number[counter];
		}
	}

	return (str);
}
