#include "main.h"

/**
 * rot13 - encodes a string into rot13
 * @s: string to encode
 *
 * Return: address of s
 */
char *rot13(char *s)
{
	int q, j;
	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (q = 0; *(s + q); q++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[j] == *(s + q))
			{
				*(s + q) = b[j];
				break;
			}
		}
	}
	return (s);
}
