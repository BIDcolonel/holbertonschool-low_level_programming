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
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: a pointer to the resulting string dest
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
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The maximum number of bytes to concatenate from s2
 * Return: A pointer to the concatenated string
 * If the function fails, it returns NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
		n = len2;

	concat = malloc(sizeof(char) * (len1 + len2 + 1));
	if (concat == NULL)
		return (NULL);

	_strcpy(concat, s1);
	_strcat(concat + len1, s2);

	return (concat);
}
