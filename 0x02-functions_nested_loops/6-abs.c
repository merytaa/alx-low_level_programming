#include "main.h"
/**
 * _abs - Entry point
 *
 * @i: integer
 *
 * Return: Always 0 (Success)
 */
int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
}
