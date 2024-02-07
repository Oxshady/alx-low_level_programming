#include <stdlib.h>
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: is array of integers
 * @n: number of elements in array
*/
void reverse_array(int *a, int n)
{
	int i = 0;
	int *rev;

	if (n <= 0)
		return;
	rev = (int *) malloc(sizeof(int) * n);
	if (rev == NULL)
		return;
	while (i < n)
	{
		rev[i] = a[i];
		i++;
	}
	i = 0;
	n -= 1;
	while (n >= 0)
	{
		a[i] = rev[n];
		n--;
		i++;
	}
}
