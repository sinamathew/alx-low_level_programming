#include "dog.h"

/**
 * _strdup - custom strdup function
 * @str: takes the parameter
 * By: Sina Mathew
 * Return: str2
 */
char *_strdup(char *str)
{
	int i;
	char *str2;

	if (str == NULL)
		return (NULL);

	str2 = malloc(strlen(str) + 1);

	if (str2 == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		str2[i] = str[i];

	str2[i] = '\0';

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

	new_dog->name = strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		free(name);
		free(owner);
		return (NULL);
	}

	new_dog->age = age;

	new_dog->owner = strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		free(name);
		return (NULL);
	}

	if (new_dog != NULL)
	{
		free(name);
		free(owner);
	}

	return (new_dog);
}
