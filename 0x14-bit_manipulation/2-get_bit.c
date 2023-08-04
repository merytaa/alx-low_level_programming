#include "main.h"

/**
 * get_bit - value of d number
 * @nn: number
 * @ex: i of the bit
 *
 * Return: bit
 */
int get_bit(unsigned long int nn, unsigned int ex)
{
	int bit_val;

	if (ex > 63)
		return (-1);

	bit_val = (nn >> ex) & 1;

	return (bit_val);
}
