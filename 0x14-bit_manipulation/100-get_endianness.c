#include "main.h"

/**
 * get_endianness - checks the endianness of the system.
 * By: Sina Mathew
 * Return: 0 if big endian, 1 if the little endian
 */
int get_endianness(void)
{
	unsigned int num = 1;
	char *byte_ptr = (char *)&num;

	return (*byte_ptr);
}
