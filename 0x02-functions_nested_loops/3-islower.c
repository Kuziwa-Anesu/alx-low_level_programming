#include "main.h"
/* A function to check whether a character is lower-case */
/**
 *_islower - checks for lowercase character
 *@c: The number to be checked
 *
 * Return: 1 if c is lowercase. 0 otherwise.
 */
int _islower(int c)
{
	if ((97 <= c && 122 >= c) || ('a' <= c && 'z' >= c))
		return (1);
	else
		return (0);
}
