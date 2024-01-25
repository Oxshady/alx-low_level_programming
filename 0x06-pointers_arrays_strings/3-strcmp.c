#include "main.h"
/**
 * _strcmp - compare two strings lexicographically
 * @s1: first string
 * @s2: second string
 * Return: 15 if s1 is greatest -15 if  s1 is smallest 0 if both are equal
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0, result = 0, x1 = 0, x2 = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			result = 0;
		else if (s1[i] > s2[i])
			result = 15;
		else if (s1[i] < s2[i])
			result = -15;
		i++;
	}
	while (s1[x1] != '\0')
		x1++;
	while (s1[x2] != '\0')
		x2++;
	if (x2 > x1)
		result = 15;
	if (x1 > x2)
		result = -15;
	if (x1 == x2)
		result = 0;
	return (result);
}
