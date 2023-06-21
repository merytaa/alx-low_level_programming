#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int print_alphabet(void)
{
	int i, j;
	
	for (i = 1; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
	return (0);
}
