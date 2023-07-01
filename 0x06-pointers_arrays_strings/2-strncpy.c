#include "main.h"

/**
 * _strncpy - Tis is a function that copies a string.
 *
 * @dest: pointer to destination input buffer.
 * @src: pointer to source input buffer.
 * @n: bytes of @src.
 *
 * Return: @dest.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int q;

	/**
	 * iterate through src array.
	 * where if there is no null byte.
	 * among the first n bytes of source.
	 * the string placed in dest will not be
	 * null terminated.
	*/
	for (q = 0; q < n && src[q] != '\0'; q++)
		dest[q] = src[q];
	/**
	 * if the length of source is less than n
	 * write additional nullbytes to dest to
	 * ensure that a total of n bytes is written
	*/
	while (q < n)
	{
		dest[q] = '\0';
		q++;
	}

	return (dest);
}
