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
 * *_strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: in pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int d = 0;
	int s = 0;

	while (dest[d] != '\0')
	{
		d++;
	}

	while (src[s] != '\0')
	{
		dest[d] = src[s];
		d++;
		s++;
	}

	dest[d] = '\0';

	return (dest);
}

/**
 * str_concat - concatenates two strings.
 * @s1: the first string
 * @s2: the second string
 * Return: pointer to the concatenated string, or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	unsigned int str1, str2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	str1 = _strlen(s1);
	str2 = _strlen(s2);

	concatenated = malloc(sizeof(char) * (str1 + str2 + 1));
	if (concatenated == NULL)
	return (NULL);

	_strcpy(concatenated, s1);
	_strcat(concatenated, s2);

	if (concatenated == NULL)
	{
		free(concatenated);
		return (NULL);
	}

	return (concatenated);
}
