#include "main.h"

/**
 * _strcat - This function that will concatenates.
 *          two strings.
 *
 * @dest: pointer to destnation input.
 * @src: pointer to source input.
 *
 * Return: pointer to resulting string @dest.
*/

char *_strcat(char *dest, char *src)
{
	int deslen = 0;
	int srclen = 0;
	int yx;

for (yx = 0; dest[yx] != '\0'; yx++)
	deslen++;
for (yx = 0; src[yx] != '\0'; yx++)
	srclen++;
for (yx = 0; yx <= srclen; yx++)
	dest[deslen + yx] = src[yx];

return (dest);
}
