#include "main.h"
/**
 * main - Entry point
 * description: if alpabet is lowercase
 * @c: ASCII code caracter
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
