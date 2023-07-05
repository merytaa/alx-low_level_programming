#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - check the code
 * @n : value
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	if (n > 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - check the code
 * @n: value
 * @m: value of i
 * Return: Always 0.
 */
int actual_sqrt_recursion(int n, int m)
{
	if (m * m > n)
		return (-1);
	if (m * m == n)
		return (m);
	return (actual_sqrt_recursion(n, m + 1));
}
