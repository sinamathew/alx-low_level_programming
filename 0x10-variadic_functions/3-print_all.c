#include "variadic_functions.h"
/**
 * print_arg - print each argument based on format
 * @format: the format specifier
 * @args: the variable argument
 * @first_arg: pointer to the first_arg flag
 * By: Sina Mathew
 */

void print_arg(char format, va_list args, int *first_arg)
{
	if (*first_arg == 0)
		printf(", ");

	*first_arg = 1;

	switch (format)
	{
		case 'c':
			printf("%c", va_arg(args, int));
			break;

		case 'i':
			printf("%d", va_arg(args, int));
			break;

		case 'f':
			printf("%f", va_arg(args, double));
			break;

		case 's':
			print_str(va_arg(args, char *));
			break;

		default:
			break;
	}

	*first_arg = 0;
}


/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 * @...: arguments
 * By: Sina Mathew
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int first_arg = 1;
	unsigned int i = 0;

	va_start(args, format);

	while (format && format[i])
	{
		print_arg(format[i], args, &first_arg);
		i++;
	}

	va_end(args);
	printf("\n");
}

/**
 * print_str - print string
 * @str: points to the character
 */
void print_str(char *str)
{
	if (str == NULL)
		printf("(nil)");

	printf("%s", str);
}
