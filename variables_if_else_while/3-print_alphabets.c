#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha = 'a';
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	alpha = 'A';
	while (alpha <= 'Z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
