#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_array -  prints n elements of an array of integers
 * @a: array of integers
 * @n: number of integers to be printed
 *
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
		{
			printf("%d", *(a + i));
		}
		else
		{
			printf("%d, ", *(a + i));
		}
	}
	putchar(10);
}
