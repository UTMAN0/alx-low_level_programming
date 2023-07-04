#include "main.h"

/**
*_strchr - Returns a pointer to the first occurrence
*of the character c in the string s, or NULL if the
*character is not found
*
*@s:string targeted
*@c:character targeted
*
*Return: returns pointer to first occcurence of c
*/

char *_strchr(char *s, char c)
{
	unsigned int  q;

	q = 0;
	while ((s[q] != c) && (s[q] != '\0'))
		q++;
	if (s[q] == c)
		return (s + q);
		/**
		 *  By adding the q to the base address of the string s
		 * we can access the memory location
		 * of the q-th character in the string
		 */
	else
		return (NULL);
}
