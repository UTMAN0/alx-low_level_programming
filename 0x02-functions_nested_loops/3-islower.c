#include "main.h"

/**
 * _islower - This function checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if the character is lowercase, 0 if otherways.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
