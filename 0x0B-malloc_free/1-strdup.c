#include <stdlib.h>
#include "main.h"
/**
 * _strdup - function that returns a pointer to newly allocated space in memory
 * Description: function that returns a pointer to a newly
 * allocated space in memory
 * which contains a copy of the string given as a parameter.
 * @str: given string to copy from it
 * Return: address of the first location in newly allocated space
 */
char *_strdup(char *str)
{
	int i = 0, ii = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	char *newStr;

	newStr = (char *) malloc(sizeof(char) * i);
	if (newStr == NULL)
		return (NULL);
	while (str[ii] != '\0')
	{
		newStr[ii] = str[ii];
		ii++;
	}
	newStr[ii] = '\0';

	return (newStr);
}
