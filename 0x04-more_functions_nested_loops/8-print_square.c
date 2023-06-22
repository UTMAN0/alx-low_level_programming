#include "main.h"

/**
 * print_square - This fucntion that will draw square.
 *@size: Is the size of the square
 * Return: Void.
*/

void print_square(int size)
{
	int o, y;

	if (size <= 0)
		_putchar('\n');
	else
	{
		o = 0;
		while (o < size)
		{
			y = 0;
			while (y < size)
			{
				_putchar('#');
				y++;
			}
			o++;
			_putchar('\n');
		}
	}
}
