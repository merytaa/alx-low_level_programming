#include "main.h"
#include <stdio.h>

/**
 * factorial - check the code
 * @i: number
 * Return: f of n
 */
int factorial(int i)
{
	if (i < 0)
		return (-1);
	if (i == 0)
		return (1);
	return (i * factorial(i - 1));
}
