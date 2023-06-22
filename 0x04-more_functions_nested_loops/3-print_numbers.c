#include "main.h"

/**
*print_numbers - Is Print 0123456789.
*
*Return: void
*/

void print_numbers(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
	{
	_putchar(num);
	}
	_putchar('\n');
}
