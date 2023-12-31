#include "main.h"

/**
*_strspn - function that gets the length of a prefix substring.
*@s:segment targeted
*@accept:reference bytes container
*
*Return:returns the number of bytes in the initial
* segment of s which consist only of bytes from accept
*/

unsigned int _strspn(char *s, char *accept)
{
	/**
	 *  we initialize the bytes so we can keep
	 * track of the numbers of bytes in sand accept
	 */
	unsigned int bytes = 0;
	int q;

	for (q = 0; q < *s; s++)
	{
		for (q = 0; accept[q]; q++)
	/*loop through reference string accept*/
		{
			if (accept[q] == *s)
			{
			/*if bytes matches increment bytes*/
				bytes++;
				break;
			}
		/*if byte doesn t match return bytes*/
			else if ((accept[q + 1]) == '\0')
				return (bytes);
		}
	}
	return (bytes);
}
