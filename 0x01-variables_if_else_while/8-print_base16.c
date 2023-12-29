#include <stdio.h>
/**
 * main - entry point
 * Return: zero if success
 */
int main(void)
{
	int hexa = 0;

	for (; hexa <= 15; hexa++)
		printf("%x", hexa);
	putchar('\n');
	return (0);
}
