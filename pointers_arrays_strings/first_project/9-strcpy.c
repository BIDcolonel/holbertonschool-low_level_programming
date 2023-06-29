#include "main.h"

/**
 * _strcpy -  copies the string pointed to by src, including the
 * terminating null byte (\0)
 * @dest: pointer to the destination array where the content is to be copied
 * @src: the string which will be copied
 * Return: value the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int counter = 0;

	while (src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}

	dest[counter] = '\0';
	return (dest);
}
