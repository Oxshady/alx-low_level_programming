#include <stdio.h>
/**
 * main - find and prints the sum of the even-valued terms
 * Return: zero if success
 */
int main(void)
{
	long int term1 = 0, term2 = 1, fibo = 0, sumE = 0;

	for (; fibo < 4000000;)
	{
		fibo = term1 + term2;
		term1 = term2;
		term2 = fibo;
		if (fibo % 2 == 0)
			sumE += fibo;
	}
	printf("%li", sumE);
	return (0);
}
