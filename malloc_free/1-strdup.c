#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: len
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
	{
		len++;
	}
	return (len);
}

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

/**
 * _strdup - returns a pointer to a new string which is a duplicate
 * of the string str
 * @str: the string to duplicate
 * Return: pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length;

	if (str == NULL)
		return (NULL);

	length = _strlen(str);
	duplicate = malloc(sizeof(char) * (length + 1));
	if (duplicate == NULL)
		return (NULL);

	_strcpy(duplicate, str);

	if (duplicate == NULL)
	{
		free(duplicate);
		return (NULL);
	}

	return (duplicate);
}
