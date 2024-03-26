#include "function_pointers.h"
/**
 * array_iterator -  If you spend too much time
 * thinking about a thing, you'll never get it done
 * @array: array to execute func on each of it's elements
 * @size: size of the array
 * @action: pointer to function that take int and return nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (size <= 0 || action == NULL || array == NULL)
		return;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
