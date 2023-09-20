#include "search_algos.h"

/**
 * binary_search - Search for a value in a sorted integer array
 * using binary search
 * @array: Pointer to the sorted integer array
 * @size: The number of elements in the array
 * @value: The value to search for
 * Return: The index of the value in the array if found; otherwise, -1
 */
int binary_search(int *array, size_t size, int value)
{
	int index, left, right, mid;

	if (array == NULL)
		return (-1);

	left = 0;
	right = (int)size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (index = left; index <= right; index++)
		{
			if (index == right)
			printf("%d\n", array[index]);
			else
			printf("%d, ", array[index]);
		}

		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
