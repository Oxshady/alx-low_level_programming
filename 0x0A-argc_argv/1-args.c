#include <stdio.h>
/**
 * main - print the command line argument numbers
 * @argc: the number of command line argument
 * @argv: array of strings
 * Return: 0 if success
 */
int main(int argc, char __attribute__((unused))*argv[])
{
	printf("%i\n", (argc - 1));

	return (0);
}
