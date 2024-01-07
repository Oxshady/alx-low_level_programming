#include <stdio.h>
/**
 * main -  sum of all the multiples of 3 or 5 below 1024
 * Return: zero if success
 */
int main(void)
{
	int natural = 1, sum = 0;

	for (; natural < 1024; natural++)
	{
		if ((natural % 3 == 0) || (natural % 5 == 0))
			sum += natural;
	}
	printf("%i\n", sum);
	return (0);
}
