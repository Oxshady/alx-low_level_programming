#include <stdlib.h>
#include "main.h"
/**
 * create_array - function that creates an array of chars and initialize it
 * @size: lenght of array
 * @c: characters that will intitalize the created array
 * Return: address of the first location of allocated block for the array
*/
char *create_array(unsigned int size, char c)
{
	int i = 0;
	char *NewArr;

	NewArr = (char *) malloc(sizeof(char) * size);
	if (size == 0 || NewArr == 0)
		return (0);
	for (; i < (int)size; i++)
		NewArr[i] = c;
	return (NewArr);
}
