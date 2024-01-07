#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print numbers from n to 98 in order
 * @n: the integer that we start from it to 98
 * Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
				printf("%i\n", n);
			else
				printf("%i, ", n);
		}
	}
	else if (n >= 98)
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
				printf("%i\n", n);
			else
				printf("%i, ", n);
		}
	}
}
