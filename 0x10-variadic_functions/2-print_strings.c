#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings -variadic function that prints strings followed by a new line
 * @separator: the string that represent separator between strings
 * @n: number of strings
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *str = NULL;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
			printf("nill");
		else
		{
			printf("%s", str);
		}
		if (*separator && (i + 1 != n))
			printf("%s", separator);
	}
	printf("\n");
}
