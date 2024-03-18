#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * checksum - calculate the sum of ASCII values of a string
 * @str: string to calculate its ASCII sum
 * Return: the sum of ASCII values
 */
int checksum(char *str)
{
	int sum = 0, i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		sum += (int)str[i];
	}
	return (sum);
}

/**
 * main - function that generates a random password for the crackme program
 * Return: zero if success
 */
int main(void)
{
	char pass[35];
	int i = 0, x = 0, j = 0;

	srand(time(NULL));
	do {
		pass[i] = rand() % 94 + 33;
		i++;
	} while (checksum(pass) < 2772 && i < 35);

	if (checksum(pass) < 2772)
	{
		x = 2772 - checksum(pass);
		if (x >= 33 && x <= 126)
		{
			pass[i] = x;
			i++;
			pass[i] = '\0';
		}
	}
	else if (checksum(pass) > 2772)
	{
		while (checksum(pass) != 2772)
		{
			pass[j]--;
			if (pass[j] < 33)
			{
				pass[j] = 126;
			}
			j++;
			if (pass[j] == '\0')
			{
				j = 0;
			}
		}
	}
	return (0);
}
