#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: integer to be swapped
 * @b: integer to be swapped
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int f;
	int h;

	f = *a;
	h = *b;

	*a = h;
	*b = f;
}
