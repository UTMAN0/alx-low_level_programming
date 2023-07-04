#include "main.h"

/**
*_memcpy - The _memcpy() function copies n bytes
* from memory area src to memory area dest
*@dest:area where bytes are copied to
*@src:area where bytes are copied from
*@n:number of bytes to copy
*Return: dest
*Process: q will use  a loop to copy each byte from src to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int q;

	for (q = 0; q < n; q++)
	{
		/*coping a  byte from the source to the destanation */
		dest[q] = src[q];
	}
	return (dest);
}
