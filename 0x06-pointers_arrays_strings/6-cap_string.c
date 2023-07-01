#include "main.h"


/**
 * cap_string - This is a function that capitalizes
 *              all words of a string
 *
 * @s: pointer to char input array
 *
 * Return: @s
*/

char *cap_string(char *s)
{
	int q = 0;

	/*iterate through our array values*/
	while (s[q] != '\0')
	{
		/*check for any lowercase letters*/
		if (s[q] >= 97 && s[q] <= 122)
		{
			/**
			 * if we have a null character
			 * change its value to capital
			*/
			if (q == 0)
			{
				s[q] -= 32;
			}
			/**
			 * if we find any character matching the below before any small
			 * letter we change that value to a capital letter.
			*/
			if (s[q - 1] == 32 || s[q - 1] == 9 || s[q - 1] == 10 ||
				s[q - 1] == 44 || s[q - 1] == 59 || s[q - 1] == 46 ||
				s[q - 1] == 33 || s[q - 1] == 63 || s[q - 1] == 34 ||
				s[q - 1] == 40 || s[q - 1] == 41 || s[q - 1] == 123 ||
				s[q - 1] == 124)
			{
				s[q] -= 32;
			}
		}
		q++;
	}
	return (s);
}
