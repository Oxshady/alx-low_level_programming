#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the multiplication of two numbers from command line arguments
 * @argc: the number of command line arguments
 * @argv: array of strings (command line arguments)
 * Return: zero if success
 */
int main(int argc, char *argv[])
{
	int i = 1, result = 1;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (; i < argc; i++)
			result *= atoi(argv[i]);
		printf("%i\n", result);
		return (0);
	}
}
