#include "main.h"

/**
 * _strlen - This funtion to return the length of string.
 * @s: the string to be returned.
 * Return: the length of the string  p.
*/

int _strlen(char *s)
{
	int p = 0;			/* p represents the count of characters*/

	while (s[p] != '\0') /**
											*'\0' is a null character
											*so p will count the character
											*in the string in the pointer *s
											*intill he find a null character
											*/
	{
		p++;
	}
	return (p);
}
