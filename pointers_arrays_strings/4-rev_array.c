#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: the array of integers
 * @n: the number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int temporary, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		temporary = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = temporary;
	}
}
