#include "main.h"

/**
 * print_diagonal - draw a diagonal.
 * @n: This is an input of a variable
 *
 * Return: void.
 */


void print_diagonal(int n)
{
	int o, y;

	if (n <= 0)
		_putchar('\n');
	for (o = 0; o < n; o++)
	{
		for (y = 0; y < o; y++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}

}
