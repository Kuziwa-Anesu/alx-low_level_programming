#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @r: number to be checked
 *
 * Return: Returns the value of the last digit
 */
int print_last_digit(int r)
{
	int j;

	if (r > 0)
	{
		j = r % 10;
		_putchar(j + '0');
		return (j);
	}
	else if (r < 0)
	{
		j = (r * -1);
		j = r % 10;
		_putchar(j + '0');
		return (j);
	}
	else
	{
		j = r % 10;
		_putchar(j + '0');
		return (j);
	}
}
