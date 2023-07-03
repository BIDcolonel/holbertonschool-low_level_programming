#include "main.h"

/**
 * recursive -  Helper function to calculate the square root recursively
 * @n: number
 * @i: current value to check
 * Return: if n does not have a natural square root, return -1
 */
int recursive(int n, int i)
{
	if (i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	else
		return (recursive(n, i + 1));
}

/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: number
 * Return: if n does not have a natural square root, return -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	else
		return (recursive(n, 0));
}
