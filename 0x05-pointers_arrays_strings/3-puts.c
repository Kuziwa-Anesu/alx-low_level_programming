#include "main.h"
/**
 * _puts - prints a string  to stdout
 *@str: string to be displayed
 *
 * Return: 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}
