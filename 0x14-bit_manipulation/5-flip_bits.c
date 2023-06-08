#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int inc, kounter = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;
	int base_value = 63;

	for (inc = base_value; inc >= 0; inc--)
	{
		current = exclusive >> inc;
		if (current & 1)
			kounter++;
	}

	return (kounter);
}
