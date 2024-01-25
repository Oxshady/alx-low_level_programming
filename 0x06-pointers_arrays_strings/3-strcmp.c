#include "main.h"
/**
 * _strcmp - compare two strings lexicographically
 * @s1: first string
 * @s2: second string
 * Return: 1 if s1 is greatest -1 if s1 is smallest 0 if both are equal
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0, result = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] == s2[i])
			result = 0;
		else if (s1[i] > s2[i])
			result = 1;
		else if (s1[i] < s2[i])
			result = -1;
		i++;
	}
	if (s1[i] != '\0' && s2[i] == '\0')
		result = 1;
	else if (s1[i] == '\0' && s2[i] != '\0')
		result = -1;
	else
		result = 0;
	return (result);
}
