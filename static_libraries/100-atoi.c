#include "main.h"

/**
 * _atoi - convert a string to an integer
 * @s: function parameter
 * Return: converted int
 */
int _atoi(char *s)
{
	int index = 0;
	int sign = 1;
	unsigned int result = 0;

	while (s[index] && !(s[index] >= '0' && s[index] <= '9'))
	{
		if (s[index] == '-')
			sign *= -1;

		index++;
	}

	while (s[index] >= '0' && s[index] <= '9')
	{
		result = result * 10 + (s[index] - '0');
		index++;
	}

	return (sign * result);
}
