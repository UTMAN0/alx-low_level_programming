#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 *
 * @dest: This is a pointer to destination input.
 * @src: This is a pointer to source input.
 * @n: most number of bytes from @src.
 *
 * Return: @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int q, s;

	for (q = 0; dest[q] != '\0'; q++)
	{
		continue;
	}
	for (s = 0; src[s] != '\0' && s < n; s++)
	{
		dest[q + s] = src[s];
	}
	dest[q + s] = '\0';
	return (dest);
}
