/* A program to print the alphabet in lower case except q and e */
#include <stdio.h>
/**
 * main - print the alphabet in lower case except q and e
 *
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i != 101 && i != 113)
			putchar(i);
	}
	putchar (10);
	return (0);
}
