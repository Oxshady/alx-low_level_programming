#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * checksum - check the sum of ascii of string
 * @str: string to calc it's ascii sum
 * Return: the value of ascii summation
*/
int checksum(char *str)
{
	int sum = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		sum += (int)str[i];
	}
	return (sum);
}
/**
 * main - fuction that generate rand pass for crack me prog
 * Return: zero if success
*/
int main(void)
{
	char pass[100];
	int i = 0, x = 0;

	srand(time(NULL));
	do {
		pass[i] = rand() % 94 + 33;
		i++;
	} while (checksum(pass) <= 2670);
	x = 2772 - checksum(pass);
	if (x >= 33 && x <= 126)
	{
		pass[i] = x;
		i++;
	}
	pass[i] = '\0';
	return (0);
}
