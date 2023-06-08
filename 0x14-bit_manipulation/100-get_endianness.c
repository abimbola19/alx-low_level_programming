#include "main.h"

/**
 * get_endianness - checks if a machine is little or big endian
 * Return: return 0 if big, and 1 if little
 */
int get_endianness(void)
{
	unsigned int counter = 1;
	char *c = (char *) &counter;

	return (*c);
}
