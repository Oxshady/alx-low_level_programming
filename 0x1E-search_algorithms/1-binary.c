#include "search_algos.h"
/**
 * binary_search - performs binary search on a sorted array
 * @array: array to search
 * @size: number of elements in the array
 * @value: value to search for
 * Return: the index where value is located or -1 if not found
 */

int binary_search(int *array, size_t size, int value)
{
	int lowest, hieghst, middle;

	if (!size)
		return (-1);
	lowest = 0, hieghst = size - 1;
	while (lowest < hieghst)
	{
		print_array(array, lowest, hieghst);
		middle = lowest + (hieghst - lowest) / 2;
		if (value < array[middle])
			hieghst = middle - 1;
		else if (value > array[middle])
			lowest = middle + 1;
		else
			return (middle);
	}
	return (-1);
}

/**
 * print_array - prints the array being searched
 * @array: pointer to the first element of the array to print
 * @low: the starting index of the subarray
 * @high: the ending index of the subarray
 */
void print_array(int *array, int low, int high)
{
	int i;
    printf("Searching in array: ");
    for (i = low; i <= high; i++)
    {
        printf("%d", array[i]);
        if (i < high)
            printf(", ");
    }
    printf("\n");
}
