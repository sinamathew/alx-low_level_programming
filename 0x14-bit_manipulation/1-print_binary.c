#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: takes the number parameter
 * By: Sina Mathew
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int bit_count = sizeof(n) * 8;

	mask <<= (bit_count - 1);

	while (bit_count > 0)
	{
		if ((n & mask) == 0)
			_putchar('0');
		else
			_putchar('1');

		mask >>= 1;
		bit_count--;
	}
}
