#include <stdlib.h>
#include "main.h"
/**
 * create_array - 
*/
char *create_array(unsigned int size, char c)
{
	int i = 0;

	if (size == 0)
		return 0;
	char *ARRofchar = (char *)malloc(sizeof(char) * size);
	for (; i < size; i++)
		ARRofchar[i] = c;
	return ARRofchar;
}
