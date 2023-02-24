#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of rows
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{		
			for (j = 1; j < i; j++)
			{
				_putchar(' ');
			}
		_putchar(92);
		_putchar (10);
		}
	}	
	else
	_putchar(10);
}
