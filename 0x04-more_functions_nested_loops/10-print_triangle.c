#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size: size of the triangle
 *
 * Return: 0
 */
void print_triangle(int size)
{
	int i;
	int j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size; j > i; j--)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
		_putchar(10);
		}
	}
	else
	{
		_putchar(10);
	}
}
