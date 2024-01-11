#include <stdio.h>
#include "main.h"
/**
 * main - prints the numbers from 1 to 100
 * Description: if multiply by 3 print Fuzz
 * if multiply by 5 print Buzz
 * if multiply by 5 and 3 print FuzzBuzz
 * else print the number
 * Return: zero if success
*/
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (((i % 3) == 0) && ((i % 5) == 0))
			printf("FizzBuzz");
		else if ((i % 3) == 0)
			printf("Fizz");
		else if ((i % 5) == 0)
			printf("Buzz");
		else
			printf("%i", i);
		if (i == 100)
			_putchar('\n');
		else
			_putchar(' ');
	}
	return (0);
}
