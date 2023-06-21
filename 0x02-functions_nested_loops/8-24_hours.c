#include "main.h"
/**
* jack_bauer - This prints every minute of the day of Jack Bauer.
*								starting from 00:00 to 23:59.
*Return
*/

void jack_bauer(void)
{
int i, j;   /*a represent houres and b represent minutes */

i = 0;
	while (i <= 23)
	{
		for (j = 0; j <= 59; b++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
		}
	i++;
		}
}
