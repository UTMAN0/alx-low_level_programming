#include "main.h"

/**
 * string_toupper - This is a function that changes all
 *             lowercase letters of a string
 *             to uppercase.
 *
 * @s : pointer to input char.
 *
 * Return: @s.
*/

char *string_toupper(char *s)
{
	int q = 0;

	while (s[q] != '\0')
	{
		if (s[q] >= 97 && s[q] <= 122)
			s[q] = s[q] - 32;
		q++;
	}
	return (s);
}
