#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of rows
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			putchar(' ');
		}
		putchar(92);
		putchar (10);
	}
}
