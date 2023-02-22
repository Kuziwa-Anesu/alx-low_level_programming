/*A program that prints every minute of the day*/
#include "main.h"
/**
 * jack_bauer - prints every minute of every day
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int h, m;

	for (h = 0; h <= 23; h++)
		for (m = 0; m <= 59; m++)
		{
			_putchar(48 + (h / 10));
			_putchar(48 + (h % 10));
			_putchar(58);
			_putchar(48 + (m / 10));
			_putchar(48 + (m % 10));
			_putchar(10);
		}
}
