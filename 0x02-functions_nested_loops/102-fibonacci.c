#include<stdio.h>
/**
 * main - print the first 50 fibonacci
 * Return: zero if success
 */
int main(void)
{
	long int num1 = 0, num2 = 1, fibo;
	int i;

	for (i = 0; i < 50; i++)
	{
		fibo = num1 + num2;
		num1 = num2;
		num2 = fibo;
		if (fibo < 0)
		{
			fibo *= -1;
		}
		if (i < 49)
			printf("%li, ", fibo);
		else
			printf("%li\n", fibo);
	}
	return (0);
}
