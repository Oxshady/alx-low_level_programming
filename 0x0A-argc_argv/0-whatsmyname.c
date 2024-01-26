#include<stdio.h>
/**
 * main - print the first command line arg which is program name
 * @argc: the number of command line argument
 * @argv: array of pointers to char (array of strings)
 * Return: 0 if success
*/
int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s", argv[0]);
	
	return (0);
}
