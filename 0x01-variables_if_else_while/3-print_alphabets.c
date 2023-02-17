/* A program to print the alphabet in lower case and then in uppercase */
#include <stdio.h>
/**
 * main - print the lowercase alphabet and then the upper case alphabet
 *
 * Return: 0
 */

int main(void)
{
	int i;
	int y;

	for (i = 97; i <= 122; i++)
		putchar(i);
	for (y = 65; y <= 90; y++)
		putchar(y);
	putchar (10);
	return (0);
}
