#include <stdio.h>
/**
 * main - entry point
 * Return: zero if success
 */
int main(void)
{
	char character = 97;

	for (int i = character; i <= 122; i++)
	{
		putchar(i);
		putchar('\n');
	}
	return (0);
}
