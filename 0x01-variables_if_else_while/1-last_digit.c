/*A program to print the last digit of the random number n*/
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
 * main - prints last digit of n
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int la;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
        la= n % 10;
	if (la > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, la);
	else if (la == 0)
		printf("Last digit of %d is %d and is 0\n", n, la);
	else if (la < 6 && la != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, la);
	return (0);
}
