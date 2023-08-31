#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to the binary
 * By: Sina Mathew
 *
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{

		if (*b == '1' || *b == '0')
		{
			result = result * 2 + (*b - '0');
		}
		else
			return (0);

		b++;
	}
	return (result);
}
