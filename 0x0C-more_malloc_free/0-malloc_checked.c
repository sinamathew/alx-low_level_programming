#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function that allocates memory using "malloc."
 *
 * @b: allocation for int, Num of bytes.
 *
 * Return: ptr to allocated memory
 *
 * By Sina Mathew
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
