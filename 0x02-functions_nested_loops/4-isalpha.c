/* A function to check for an alphabetic character */
/**
 *_isalpha - checks for alphabetic character
 *@c: The character to be checked
 *
 * Return: 1 if c is alphabetic. 0 otherwise.
 */
int _isalpha(int c)
{
	if ((97 <= c && 122 >= c) || (65 <= c && 90 >= c))
		return (1);
	else if (('a' <= c && 'z' >= c) || ('A' <= c && 'Z' >= c))
		return (1);
	else
		return (0);
}
