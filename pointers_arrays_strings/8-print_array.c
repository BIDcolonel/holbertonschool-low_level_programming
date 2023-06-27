#include "main.h"

/**
 * print_array - n elements of an array of integers
 * @a: pointer variable address
 * @n: the number of elements of the array to be printed
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		if (index == 0)
			printf("%d", a[index]);
		else
			printf(", %d", a[index]);

	}
	printf("\n");
}
