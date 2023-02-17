/* A program to print the alphabet in lower case */
#include <stdio.h>
/**
 * main - print the last letter of the alphabet
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		putchar(i);
	putchar (10);
	return (0);
}
