#include <stdlib.h>
#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number
 * @n: the number to print it's binary representation
*/
void print_binary(unsigned long int n)
{
	int x;

	if (n == 1 || n == 0)
		_putchar(((n >> 0) & 1) + '0');
	else if (n <= 255)
	{
		for (x = 6; x >= 0; x--)
			_putchar(((n >> x) & 1) + '0');
	}
	else if (n <= 65536 || n <= 4294967296)
	{
		for (x = 10; x >= 0; x--)
			_putchar(((n >> x) & 1) + '0');
	}
}

