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

	j = r % 10;
	if (j < 0)
		j *= -1;
	_putchar(j + 48);
	return (j);
}
