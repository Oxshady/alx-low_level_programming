#include<stdlib.h>
#include "main.h"
/**
 * str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return:pointer should point to a newly allocated space
 * 			in memory which contains the contents of s1,
 *  		followed by the contents of s2, and null terminated
*/
char *str_concat(char *s1, char *s2)
{
	int x1 = 0,x2 = 0;
	char *conc;

	if (s1 == NULL && s2 == NULL)
		return NULL;
	if (s1 == NULL && s2 != NULL)
	{
		while (s2[x2] != '\0')
			x2++;
		conc = (char *) malloc(sizeof(char) * x2 + 1);
		if (conc == NULL)
			return NULL;
		while (s2[x1] != '\0')
			conc[x1] = s2[x1], x1++;
		conc[x1] = '\0';
	}
	else if (s1 != NULL && s2 == NULL)
	{
		while (s1[x2] != '\0')
			x2++;
		conc = (char *) malloc(sizeof(char) * x2 + 1);
		if (conc == NULL)
			return NULL;
		while (s1[x1] != '\0')
			conc[x1] = s1[x1], x1++;
		conc[x1] = '\0';
	}
	else if (s1 != NULL && s2 !=NULL)
	{
		while (s1[x1] != '\0')
			x1++;
		while (s2[x2] != '\0')
			x2++;
		conc = (char *) malloc((sizeof(char) * x1) + (sizeof(char) * x2) + 1);
		if (conc == NULL)
			return NULL;
		x1 = 0,x2 = 0;
		while (s1[x1] != '\0')
			conc[x1] = s1[x1], x1++;
		while (s2[x2] != '\0')
			conc[x1] = s2[x2], x2++, x1++;
		conc[x1] = '\0';
	}
	return (conc);
}
