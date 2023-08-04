#include "main.h"

/**
 * clear_bit - bit to 0
 * @nn:  number change
 * @ex: bit to clear
 *
 * Return: success or failure
 */
int clear_bit(unsigned long int *nn, unsigned int ex)
{
	if (ex > 63)
		return (-1);

	*nn = (~(1UL << ex) & *nn);
	return (1);
}
