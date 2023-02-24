#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: 0
 */
void more_numbers(void)
{	
	int i;
	int j;

	for (j = 0; j <= 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i < 10)
			{
				_putchar(48 + i);
			}
			else
			{
				_putchar(48 + (i / 10));
				_putchar(48 + (i % 10));
			}
		}
		_putchar(10);
	}
}
