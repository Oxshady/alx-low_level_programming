#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers,
 *  starting with 1 and 2, followed by a new line.
 * Return: zero if success
*/
int main(void)
{
	int num1 = 1, num2 = 2, i = 2;
	long int fibo = 0;

	printf("%lu, %lu", num1, num2);
	while (i < 98)
	{
		fibo = num1 + num2;
		num1 = num2;
		num2 = fibo;
		i++;
		printf(", %lu", fibo);
	}
	printf("\n");
	return (0);
}
