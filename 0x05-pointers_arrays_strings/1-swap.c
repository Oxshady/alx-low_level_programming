#include "main.h"
/**
 * swap_int - swap the value of two integess by pass them by refrence
 * @a: pointer to first int
 * @b: pointer to second int
*/
void swap_int(int *a, int *b)
{
	int replace;

	replace = *a;
	*a = *b;
	*b = replace;
}
