#include "main.h"

/**
 * *_strcpy -  this copies the string pointed to by src.
 * @dest: char type string.
 * @src: char type string.
 * Return: dest.
 * process :  we take two input strings: the source string `src`.
 * and the destination string `dest`.
 * we use a loop to copy each character of `src` to `dest`.
 * we also copies the null character `\0` to the end of `dest`.
 *to mark the end of the string.
*/

char *_strcpy(char *dest, char *src)
{
	int c = -1;

	do {
		c++;
		dest[c] = src[c];
	} while (src[c] != '\0');

	return (dest);
}
