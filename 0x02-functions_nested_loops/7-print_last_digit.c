#include "main.h"
/**
 * print_last_digit - This function that prints the last digit of a number.
 *
 *@x: the complete number.
 *
 * Return: The value of the last digit k.
*/

int print_last_digit(int x)
{
	int i;									/*to store the last digit in x*/

	i = x % 10;							/*modul that give the last digit */
	if (x < 0)
		i = -i;

	_putchar(i + '0');
	return (i);
}
