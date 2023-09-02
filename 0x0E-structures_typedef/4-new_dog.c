#include "dog.h"

/**
 * _strdup - returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string
 * given as a parameter
 *
 * @str: string passed in the function
 *
 * Return: NULL or pointer to the string
 */

char *_strdup(char *str)
{
	int i;
	char *str2;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i])
		i++;

	str2 = malloc((i * sizeof(*str)) + 1);

	if (str2 == NULL)
		return (NULL);

	i = 0;
	while (str[i])
	{
		str2[i] = str[i];
		i++;
	}
	return (str2);
}


/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the new dog, or NULL if allocation fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	if (*name == '\0' || *owner == '\0')
		return (NULL);

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		free(name);
		free(owner);
		return (NULL);
	}

	new_dog->name = _strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		free(name);
		free(owner);
		return (NULL);
	}

	new_dog->age = age;

	new_dog->owner = _strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		free(name);
		free(owner);
		return (NULL);
	}
	free(name);
	free(owner);

	return (new_dog);
}
