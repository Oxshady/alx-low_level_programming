#include<stdio.h>
/**
 * main - print the first 50 fibonacci
 * Return: zero if success
 */
int main(void)
{
	long int num1 = 1 , num2 = 2 , fibo;
	for(size_t i = 0;i < 50; i++ )
	{
		fibo = num1 + num2;
		num1 = num2;
		num2 = fibo;
		if(fibo < 0)
		{
			fibo *= -1;
		}
		printf("%li ",fibo);
	}
	return (0);
}
