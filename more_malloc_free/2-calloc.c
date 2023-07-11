#include "main.h"

/**
 * _calloc - allocate memory for an array and set memory to zero
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int total_size;
	unsigned int counter;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;
	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	for (counter = 0; counter < total_size; counter++)
		ptr[counter] = 0;

	return (ptr);
}
