#include "main.h"
/**
 * print_sign - Is a function that print the sign of a number.
 *
 * @n: Is the number of the sign that will be printed.
 *
 * Return:	1 if the number is positif:
 *					0 if the number is zero.
 *					-1 if the number is negative.
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
