#include "main.h"
/**
 * print_last_digit - print the last digit of number
 * @num: the number that we will git the last digit of it
 * Return: zero if success
 */
int print_last_digit(int num)
{
	_putchar('0' + (num % 10));
	return (num % 10);
}
