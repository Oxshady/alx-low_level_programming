#include <stdio.h>
#include <stdlib.h>
/**
 * main - add two positive numbers
 * @argc: the number of command line arguments
 * @argv: array of strings which will be converted to integers
 * Return: 0 if success 1 if failed
 */
int main(int argc, char *argv[])
{
	int i = 1, x = 0, result = 0;

	if (argc == 1)
		printf("%i\n", (argc - 1));
	else if (argc > 1)
	{
		for (; i < argc; i++)
		{
			for (; argv[i][x] != 0; x++)
			{
				if (!((argv[i][x] >= 48) && (argv[i][x] <= 57)))
				{
					printf("Error\n");
					return (1);
				}
			}
			result = result + atoi(argv[i]);
		}
		printf("%i\n", result);
	}
	return (0);
}
