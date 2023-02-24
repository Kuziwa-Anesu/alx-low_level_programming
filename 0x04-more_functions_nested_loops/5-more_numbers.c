#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: 0
 */
void more_numbers(void)
{
	for (j = 0; j <= 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i < 10)
			{
				putchar(48 + i);
			}
			else
			{
				putchar(48 + (i / 10));
				putchar(48 + (i % 10));
			}
		}
		putchar(10);
	}
}
