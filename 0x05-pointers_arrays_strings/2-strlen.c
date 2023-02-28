#include "main.h"
/**
 * _strlen - returns the length of a string.
 * @s: - pointer to  string to be measured.
 *
 * Return: int length of string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
