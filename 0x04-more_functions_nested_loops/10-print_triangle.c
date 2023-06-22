#include "main.h"

/**
 * print_triangle - This is a function to draw triangle.
 *@size: Ths is the zise of the square.
 * Return: Void.
*/

void print_triangle(int size)
{
		/*a represent row , b represent hashes , c represent spaces*/
	int e, f, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (e = 1; e <= size; e++)
		{
			for (j = size - e; j >= 1; j--)
			{
				_putchar(' ');
			}
			for (f = 1; f <= e; f++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
