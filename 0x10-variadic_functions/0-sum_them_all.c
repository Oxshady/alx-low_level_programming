#include <stdarg.h>
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of arguments
 * Return: sum of the arguments values
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum = 0;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, signed int);
	va_end(ap);
	return (sum);
}
