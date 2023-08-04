#include "main.h"

/**
 * flip_bits -bits to change
 * @nn: number
 * @mm: tow number
 *
 * Return: nmbr change
 */
unsigned int flip_bits(unsigned long int nn, unsigned long int mm)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = nn ^ mm;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
