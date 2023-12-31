#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: the number of bytes to allocate
 * Return: a pointer to the allocated memory
 * If malloc fails, the function terminates the process with a status value of
 * 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
