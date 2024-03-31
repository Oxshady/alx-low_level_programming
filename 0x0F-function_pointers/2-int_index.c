#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: array of integers to search on it
 * @size: size of array
 * @cmp: pointer to function that take int and return int
 * Return: index of element if found, -1 if not found
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, stat = 0;

	if (array == NULL || size <= 0)
		return (-1);
	for (; i < size; i++)
	{
		stat = cmp(array[i]);
		if (stat > 0)
			return (i);
	}
	return (-1);
}
