#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - variadic function that prints numbers followed bya new line
 * @separator: the string that represent separator between numbers
 * @n: the numbers of arguments passed to variadic function
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(ap, signed int));
		if (separator != NULL && (i + 1 != n))
			printf("%s", separator);
	}
	printf("\n");
}
