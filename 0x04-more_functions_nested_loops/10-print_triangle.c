#include "main.h"
/**
 * print_triangle - function that prints a triangle, followed by a new line
 * @size: size of the triangle
*/
void print_triangle(int size)
{
	int row,spaces, slash;
	
	if (size <= 0)
		_putchar('\n');
	else
	{
		for (row = 0; row < size; row++)
		{
			for (spaces = size - 1; spaces > row; spaces--)
			{
				_putchar(' ');
			}
			for (slash = 0; slash <= spaces; slash++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}