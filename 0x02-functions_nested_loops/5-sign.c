#include "main.h"
/**
 * print_sign - check if a number is positive or negative
 * @n: number to be checked
 *
 * Return: 1 if greater than 0. 0 if 0. -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else 
	{
		_putchar('-');
		return (-1);
	}
}
