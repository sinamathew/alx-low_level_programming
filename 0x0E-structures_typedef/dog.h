#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct dog - C isn't fun
 * @name: C isn't fun
 * @age: C isn't fun
 * @owner: C isn't fun
 * dog_t - C isn't fun
 *
 * By: Sina Mathew
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strdup(char *str);
#endif /* DOG_H */
