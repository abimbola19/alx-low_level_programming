#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int inc, kounter = 0;
	unsigned long int current;
	int target = 63

	for (inc = target; inc >= 0; inc--)
	{
		current = n >> inc;

		if (current & 1)
		{
			_putchar('1');
			kounter++;
		}
		else if (kounter)
			_putchar('0');
	}
	if (!kounter)
		_putchar('0');
}
