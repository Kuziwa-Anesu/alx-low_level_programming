/*A program to print all possible combinations of single-digit numbers*/
#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	int i;

	i = 48;
	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);
	return (0);
}
