#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with a
 * specific char
 * @size: the size of the array
 * @c: the char to initialize the array
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int counter;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (counter = 0; counter < size; counter++)
		array[counter] = c;

	return (array);
}
