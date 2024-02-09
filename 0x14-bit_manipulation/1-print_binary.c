#include <stdlib.h>
#include "main.h"
/**
 * print_binary - function that prints the binary representation of a number
 * @n: the number to print it's binary representation
*/
void print_binary(unsigned long int n)
{
	int bit = sizeof(n) * 8, outp;

	while (bit)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			outp++;
		}
		else if (outp)
			_putchar('0');
	}
	if (!outp)
		_putchar('0');
}

