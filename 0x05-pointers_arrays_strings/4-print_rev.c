#include "main.h"

/**
 * print_rev - this function print a string in reverse.
 * @s: this parameter string.
 * Return:Void.
 * the process :first finding the length of the string using a
  * for loop, and then iterating through the string in reverse
	* order using a 2nd for loop, printing each character using the
  *_putchar() function.
  */

void print_rev(char *s)
{
	int c = 0;

	while (s[c])
		c++;
	while (c--)
		_putchar(s[c]);
	_putchar('\n');
}
