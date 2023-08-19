#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints numbers followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 * @...: variable number of integers
 * By: Sina Mathew
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list abc;
	unsigned int q;

	va_start(abc, n);

	for (q = 0; q < n; q++)
	{
		printf("%d", va_arg(abc, int));

		if (separator != NULL && q < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(abc);
}

