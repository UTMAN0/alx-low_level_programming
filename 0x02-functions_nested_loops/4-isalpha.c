#include "main.h"
/**
 * _isalpha - Is a function that checks for alphabetic character.
 * @c: Is a parametre to check.
 * Return: 1 if c is lowercase or uppercase, 0 if otherxwise.
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
			(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
