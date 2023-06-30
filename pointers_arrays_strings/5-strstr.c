#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: pointer to the string to search in
 * @needle: pointer to the substring to search for
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;
		k = i;
		while (haystack[k] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return (&haystack[i]);
			j++;
			k++;
		}
	}

	return (NULL);
}
