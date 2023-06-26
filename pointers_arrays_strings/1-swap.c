#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: value one
 * @b: value two
 */
void swap_int(int *a, int *b)
{
	int temps = *a;

	*a = *b;
	*b = temps;
}
