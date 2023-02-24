#include "main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9 except 2 and 4
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
			_putchar(48 + i);
	}
	_putchar(10);

	return (0);
}
