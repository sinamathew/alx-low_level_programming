#include <stdlib.h>
#include "main.h"


/**
 * _calloc - Allocates memory for an array and initializes it to zero.
 * @nmemb: Number of elements in the array.
 * @size: Size of each element in bytes.
 *
 * By Sina Mathew
 * Return: Pointer to the allocated memory, or NULL on failure.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	unsigned char *byte_ptr = (unsigned char *)ptr;

	for (unsigned int i = 0; i < nmemb * size; i++)
		byte_ptr[i] = 0;

	return (ptr);
}
