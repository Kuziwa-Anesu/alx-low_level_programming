#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: 0
 */
void rev_string(char *s)
{
	int count = 0;
	int i;
	char *ptr2 = s;
	char rev;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	s -= 1;
	for (i = 0; i < count / 2; i++)
	{
		rev = *s;
		*s = *ptr2;
		*ptr2 = rev;
		s--;
		ptr2++;
	}
}
