#ifndef DOG_H
#define DOG_H

/**
 * struct dog - C isn't fun
 * struct dog_t - C isn't fun
 * @name: C isn't fun
 * @age: C isn't fun
 * @owner: C isn't fun
 * By: Sina Mathew
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

struct dog_t
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
