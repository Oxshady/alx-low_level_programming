#include <stdio.h>
#include "main.h"
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
					if ((counter1 * counter2) < 10)
						printf("%i,   ", (counter1 * counter2));
					else if (((counter1 * counter2) >= 10) && ((counter1 * counter2) < 100))
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
