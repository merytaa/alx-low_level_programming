#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * description: 'the state of a number '
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;
	if (lastd > 5)
	{
		printf("Last digit of %d is %d ans is greater tha 5\n", n, lastd);
	}
	else if (lastd == 0)
	{
		printf("Last digit of %d is 0\n", n);
	}
	else
	{
		printf("Last digit of %d is %d and less than 6\n", n, lastd);
	}
	return (0);
}

