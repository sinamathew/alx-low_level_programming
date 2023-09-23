#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - adds all the numbers
 * @n: the number of parameters passed
 * By: Sina Mathew
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum = 0;
	unsigned int i;


	if (n == 0)
		return (0);

	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
