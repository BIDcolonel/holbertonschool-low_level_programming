#include "dog.h"
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: len
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
	{
		len++;
	}
	return (len);
}

/**
 * _strcpy -  copies the string pointed to by src, including the
 * terminating null byte (\0)
 * @dest: pointer to the destination array where the content is to be copied
 * @src: the string which will be copied
 * Return: value the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int counter = 0;

	while (src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}

	dest[counter] = '\0';
	return (dest);
}

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog, or NULL on failure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name_copy, *owner_copy;
	int name_length, owner_length;

	name_length = _strlen(name);
	owner_length = _strlen(owner);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	name_copy = malloc(sizeof(char) * (name_length + 1));
	owner_copy = malloc(sizeof(char) * (owner_length + 1));
	if (name_copy == NULL || owner_copy == NULL)
	{
		free(new_dog);
		free(name_copy);
		free(owner_copy);
		return (NULL);
	}

	_strcpy(name_copy, name);
	_strcpy(owner_copy, owner);

	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;

	return (new_dog);
}
