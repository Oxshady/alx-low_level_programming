#include <stdio.h>
#include "main.h"
/**
 * print_times_table - print the n times table starting form 0
 * @n: the n that we will print it's times table
 * Return: void
 */
void print_times_table(int n)
{
	int counter1, counter2;

	if (!((n > 15) || (n < 0)))
	{
		for (counter1 = 0; counter1 <= n; counter1++)
		{
			for (counter2 = 0; counter2 <= n; counter2++)
			{
				if (counter2 == n)
				{
					printf("%i\n", (counter1 * counter2));
				}
				else
				{
					if ((counter1 * counter2) < 9)
						printf("%i,   ", (counter1 * counter2));
					else if (((counter1 * counter2) >= 9) && ((counter1 * counter2) < 100))
					{
						printf("%i,  ", (counter1 * counter2));
					}
					else if ((counter1 * counter2) > 99)
					{
						printf("%i, ", (counter1 * counter2));
					}
				}
			}
		}
	}
}
