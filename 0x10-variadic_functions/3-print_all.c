#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_all - function that prints anything
 * @format: the string pointer which will contain format specifier
 * description: where format is a list of types of
 * arguments passed to the function
*/
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, ibuffer;
	char cbuffer;
	char *sbuffer;
	float fbuffer;

	va_start(ap, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			cbuffer = va_arg(ap, int);
			printf("%c", cbuffer);
			break;
		case 'f':
			fbuffer = va_arg(ap, double);
			printf("%f", fbuffer);
			break;
		case 'i':
			ibuffer = va_arg(ap, int);
			printf("%i", ibuffer);
			break;
		case 's':
			sbuffer = va_arg(ap, char *);
			if (sbuffer == NULL)
				printf("(nil)");
			printf("%s", sbuffer);
			break;
		default:
			break;
		}
		if (format[i + 1] && (format[i + 1] == 'c' || format[i + 1] == 's'
			|| format[i + 1] == 'i' || format[i + 1] == 'f'))
			printf(", ");
		i++;
	}
	printf("\n");
}