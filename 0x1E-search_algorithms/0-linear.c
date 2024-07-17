#include "search_algos.h"
/**
 * linear_search - finding element using linear search algo
 * @array: array to search
 * @size: size or array
 * @value: value to found
 * Return: index of value if found, -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!size)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
