#include "main.h"

/**
 * _putchar - put characters to standard output
 * @c: the character
 *
 * Return: the characters
 *
 * By: Sina Mathew
 */
int _putchar(char c)
{

	return (write(1, &c, 1));
}
