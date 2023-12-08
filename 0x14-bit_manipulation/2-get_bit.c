#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index
 *
 * 
 */
int get_bit(unsigned long int a, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (a >> index) & 1;

	return (bit_val);
}
