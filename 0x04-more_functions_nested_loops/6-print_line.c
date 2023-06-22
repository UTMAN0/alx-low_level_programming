#include "main.h"

/**
 * print_line - This is a function to draw a straight line.
 *
 *@n: This is The number of times the character _ should be printed.
 *
 * Return: Void
*/

void print_line(int n)
{
	int x;

	x = 0;
	while (x < n)
	{
		_putchar('_');
		x++;
	}
	_putchar('\n');
}
