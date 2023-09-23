#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer to the array
 * @size: number of elements in the array
 * @cmp: pointer to the function to compare values
 *
 * Return: Index of the first element which the cmp function does not return 0,
 *         or -1 if no element matches or if size is <= 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL)
	{
		int i;

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}

	return (-1);
}

