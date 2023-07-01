#include "main.h"

/**
 * _isupper - This function that will checks for uppercase character.
 *
 * @y: character to check.
 *
 * Return: 1 if y is uppercase
 *			0 otherwise.
*/

int _isupper(int y)
{
		if (y >= 'A' && y <= 'Z')
			return (1);
		else
			return (0);
}
