#include "main.h"

/**
 * is_palindrome_recursive - Checks if a string is a palindrome using recursion
 * @s: The string to check
 * @start: The start index of the string
 * @end: The end index of the string
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int length = 0;
	int end;

	if (s == NULL)
		return (0);

/* Calculate the length of the string */
	while (s[length] != '\0')
		length++;

/* Set the end index to the last non-null character */
	end = length - 1;

	return (is_palindrome_recursive(s, 0, end));
}
