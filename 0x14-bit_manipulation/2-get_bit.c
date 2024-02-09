#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: the unsigned integer that we will extract specific bit from it
 * @index: the index of the specific bit
 * Return: the extracted bit
*/
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned long int mask;

	mask = 1UL << index;
	bit = (n & mask) != 0;
	return (bit);
}
