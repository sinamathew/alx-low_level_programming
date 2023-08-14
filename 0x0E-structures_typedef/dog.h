#ifndef DOG_H
#define DOG_H

/**
 * struct dog - C isn't fun
 * @name: C isn't fun
 * @age: C isn't fun
 * @owner: C isn't fun
 * By: Sina Mathew
 */

void init_dog(struct dog *d, char *name, float age, char *owner);
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
