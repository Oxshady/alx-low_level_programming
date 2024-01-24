#include <stdio.h>
#include "main.h"
/**
 * print_array - is a function that print the array of integers using putchar
 * @a: address of the first location of array
 * @n: the size of array
*/
void print_array(int *a, int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%i", a[i]);
		if (a[i] == (a[n - 1]))
			printf("\n");
		else
		{
			printf(",");
			printf(" ");
		}
	}
	}
}
