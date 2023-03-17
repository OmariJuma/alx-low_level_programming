#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - Check is the random variable is
 * positive , zero or negative 
 *@void - empty argument
 *
 *Return: returns zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	} else
	{
		printf("%d is positive\n", n);
	}
	return (0);
}

