#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @r: number to be checked
 *
 * Return: Returns the value of the last digit
 */
int print_last_digit(int r)
{
	if (r > 0)
	{
		r = r % 10;
		_putchar(r + 48);
		return (r);
	}
	else if (r < 0)
	{
		r = (r * -1) % 10;
		_putchar(r + 48);
		return (r);
	}
	else
	{
		_putchar(r + 48);
		return (r);
	}
}
