#include "main.h"

/**
 * puts_half - prints the second half of the string
 * @str: the string reference
 * Return: Void
 * we use a loop to iterate through the string
 * and determine its length.
 * we use another loop to print ever
 * character in the second half of the string
*/

void puts_half(char *str)
{
	int c;

	for (c = 0; str[c] != '\0'; i++)

	/* Move the index c to the middle of the string*/
	c++;
	for (c /= 2; str[c] != '\0'; c++)
	/*Loop through the second half of the string and print each character.*/
	{
		_putchar(str[c]);
	}
	_putchar('\n');
}
