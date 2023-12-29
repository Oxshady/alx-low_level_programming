#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Description: check if the n is negative or positive or zero
 * Return: zero if success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%lu is positive", n);
	else if (n < 0)
		printf("%lu is negative", n);
	else
		printf("%lu is zero", n);
	return (0);
}
