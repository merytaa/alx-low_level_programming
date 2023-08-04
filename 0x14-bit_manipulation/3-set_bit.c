#include "main.h"

/**
 * set_bit - index to 1
 * @nn:  change
 * @ex: the bit to 1
 *
 * Return: success or failure
 */
int set_bit(unsigned long int *nn, unsigned int ex)
{
	if (ex > 63)
		return (-1);

	*nn = ((1UL << ex) | *nn);
	return (1);
}
