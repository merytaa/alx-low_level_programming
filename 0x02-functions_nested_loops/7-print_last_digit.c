#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * @i: integer
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int i)
{
	int n;

	n = i % 10;
	if (n < 0)
	{
		_putchar(-n + 48);
		return (-n);
	}
	else
	{
		_putchar(n + 48);
		return (n);
	}
}
