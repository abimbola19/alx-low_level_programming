#include "main.h"
/**
 * _isupper - Check caracter
 * @c: Character for checking
 *
 * Return: 1 if the character is uppercase, 0 otherwise.
 */

int _isupper(int c)
{
	if(c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
