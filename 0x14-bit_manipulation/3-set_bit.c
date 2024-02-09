#include "main.h"
/**
 * set_bit - function that returns the value of a bit at a given index
 * @n: pointer to block of bytes of unsinged type
 * @index: the index of the required bit
 * Return: the desired bit
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	unsigned long int mask = 1UL << index;

	int previous_bit = (*n >> index) & 1;

	*n |= mask;

	return (previous_bit);
}
