#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string to be printed
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int i = 0;
	int count = 0;

	while (*str != '\0')
	{
		count++;
		str++;
	}
	if (count % 2 == 0)
	{
		while (*(str - count / 2 + i) != '\0')
		{
			_putchar(*(str - count / 2 + i));
			i++;
		}
	}
	else if (count % 2 != 0)
	{
		while (*(str - (count - 1) / 2 + i) != '\0')
		{
			_putchar(*(str - (count - 1) / 2 + i));
			i++;
		}
	}
	_putchar(10);
}
