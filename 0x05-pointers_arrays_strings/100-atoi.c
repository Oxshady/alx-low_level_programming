#include<stdio.h>
#include "main.h"
/**
 * _atoi -  convert a string to an integer
 * @s: string to convert to int
 * Return: return converted string to integer
*/
int _atoi(char *s)
{
	int i = 0, result = 0, digit = 0, sign = 1, x = 0;

	for (; s[i] != '\0'; i++)
	{
		if ((s[i] >= 48 && s[i] <= 57))
		{
			digit = s[i] -  '0';
			result = (result * 10) + digit;
		}
	}
	for (; s[x] != 0; x++)
	{
		if (s[x] == '-' && (s[x + 1] >= 48 && s[x + 1] <= 57))
			sign = -1;
		else if (s[x] == '+' && (s[x + 1] >= 48 && s[x + 1] <= 57))
			sign = 1;
	}
	result = result * sign;
	return (result);
}
