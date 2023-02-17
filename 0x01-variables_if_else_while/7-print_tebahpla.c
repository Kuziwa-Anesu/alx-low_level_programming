/* A program that prints the lowercase alphabet in reverse*/
#include <stdio.h>
/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: 0
 */
int main(void)
{
	int i = 122;

	for (i = 122; i >= 97 ; i--)
		putchar(i);
	putchar(10);
	return (0);
}
