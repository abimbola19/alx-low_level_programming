#include "main.h"

/**
 * get_bit - returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index of the bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;
	int target = 63;

	if (index > target)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
