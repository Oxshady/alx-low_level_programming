#include <stdio.h>
/**
 * main - starting point
 * Return: zero if success
 */
int main(void)
{
	int num = 0;

	for (; num < 10; num++)
		putchar('0' + num % 10);
	putchar('\n');
	return (0);
}
