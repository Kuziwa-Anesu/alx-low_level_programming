/**
 * print_alphabet_x10 - prints lower-case alphabet x10
 * Description - prints lower-case alphabet x10
 */
void print_alphabet_x10(void)
{
	int j;

	j = 0;
	while (j < 10)
	{
		int i;

		for (i = 97; i <= 122; i++)
		{
			putchar(i);
		}
		putchar(10);
		j++;
	}
	return (0);
}
