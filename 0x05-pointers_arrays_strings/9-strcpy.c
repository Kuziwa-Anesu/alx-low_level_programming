#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 * @dest: destination of the copied string
 * @src: source of the copied string
 *
 * Return: pointer to the destination string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	char *return_ptr = dest;

	while (*(src + i) != '\0')
	{
		*dest = *(src + i);
		i++;
		dest++;
	}
	*dest = '\0';

	return (return_ptr);
}
