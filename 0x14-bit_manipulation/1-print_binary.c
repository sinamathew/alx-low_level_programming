#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: takes the number parameter
 * By: Sina Mathew
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask;

	mask = 1 << (sizeof(n) * 8 - 1);
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	while (mask > 0)
	{
		if ((n & mask) == 0)
			_putchar('0');
		else
			_putchar('0');

		mask >>= 1;
	}
}
