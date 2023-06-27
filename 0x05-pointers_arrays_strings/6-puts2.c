#include "main.h"

/**
 * puts2 - this function to print every other character of a string.
 * starting with the first character.
 * @str: parametr string.
 * Return: void.
 * process : we use a loop to iterate through the string and
 * we check if the index is even to determine whether
 *  to print.
*/

void puts2(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		if (c % 2 == 0)			/*Check if the index is even*/
		{
		_putchar(str[c]);
		}
	c++;
	}

	_putchar('\n');
}
