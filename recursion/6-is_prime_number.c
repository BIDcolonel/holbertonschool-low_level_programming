#include "main.h"

/**
 * helper - recursive helper function
 * @n: the number to check
 * @divisor: the current divisor to check divisibility
 * Return: 1 if the number is prime, 0 otherwise
 */
int helper(int n, int divisor)
{
	if (n <= 1)
		return (0);

	if (n == 2)
		return (0);

	if (n % divisor == 0)
		return (0);

	if (divisor * divisor > n)
		return (1);

	return (helper(n, divisor + 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	return (helper(n, 2));
}
