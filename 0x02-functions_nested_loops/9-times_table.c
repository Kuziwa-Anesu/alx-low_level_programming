#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: 0
 */
void times_table(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			if ((x * y) < 10)
			{
				_putchar(48 + (y * x));
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if ((x * y) > 10)
			{
					_putchar(48 +i ((x * y) / 10));
					_putchar(48 + ((x * y) % 10));
					_putchar(',');
					_putchar(' ');
				}
			}
		}
	
}

