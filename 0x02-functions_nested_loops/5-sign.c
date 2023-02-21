/**
 * print_sign - check if a number is positive or negative
 * @n: number to be checked
 *
 * Return: 1 if greater than 0. 0 if 0. -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
		putchar('+');
		return (1);
	if (n == 0)
		putchar('0');
		return (0);
	if (n < 0)
		putchar('-');
		return (-1);
}
