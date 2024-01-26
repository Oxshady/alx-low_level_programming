#include <stdio.h>
/**
 * main - printing all incoming command line arguments
 * @argc: the number of command line arguments
 * @argv: array of string include command line arguments
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
