
#include "function_pointers.h"
/**
 * print_name - print string using pointer to function
 * @name: string to print
 * @f: pointer to function that takes string and return nothing
*/
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
