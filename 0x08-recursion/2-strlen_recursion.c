#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - check the code
 * @s: variabl
 * Return: lenght
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)
	{
		n++;
		n += _strlen_recursion(s + 1);
	}
	return (n);
}
