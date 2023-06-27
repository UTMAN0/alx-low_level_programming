#include "main.h"

/**
 * _puts - this function to print the string.
 * @str: parameter.
 * Return: Void.
*/

void _puts(char *str)
{
	int c;

for (c = 0; str[c] != '\0'; c++)
	_putchar(str[c]);
/*str[c] will check the index till it reach'\0'*/
_putchar('\n');
}
