/**
 * _abs - returns absolute value of a number
 * @r:  number to be passed
 *
 * Return: The absolute value
 */
int _abs(int r)
{
	if (r > 0)
	{
		r = r * 1;
		return (r);
	}
	else if (r < 0)
	{
		r = r * -1;
		return (r);
	}
	else
		return (r);
}
