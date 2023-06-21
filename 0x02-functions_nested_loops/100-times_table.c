#include "main.h"

/**
 * print_times_table - this will rints the times table of the input,
 *                     starting with 0.
 * @n: This is The value of the times table to be printed.
 */
void print_times_table(int n)
{
int o, a, r;/*o represents the first number in each multiplication
							* operation, a represents the second number
							* r represents the result of the multiplication.
							*/

	if (n >= 0 && n <= 15)
	{
		for (o = 0; o <= n; o++)
		{
			_putchar('0');

			for (a = 1; a <= n; a++)
			{
				_putchar(',');
				_putchar(' ');

				r = o * a;

				if (r <= 99)
					_putchar(' ');
				if (r <= 9)
					_putchar(' ');

				if (r >= 100)
				{
					_putchar((r / 100) + '0');
					_putchar(((r / 10)) % 10 + '0');
				}
				else if (r <= 99 && r >= 10)
				{
					_putchar((r / 10) + '0');
				}
				_putchar((r % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
