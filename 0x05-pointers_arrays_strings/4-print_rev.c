#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * @s: pointer to string to be reversed
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int count =0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	while (count >= 0)
	{
		_putchar(*(s - 1));
		count--;
		s--;
	}
	_putchar(10);
}
