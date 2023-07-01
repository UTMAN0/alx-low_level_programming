#include "main.h"

/**
  * print_number - Prints any integer with putchar
  * @n: Number to prints
  *
  * Return: Nothing
  */
void print_number(int n)
{
	unsigned int q;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	q = n;

	if (q / 10)
		print_number(q / 10);

	_putchar(q % 10 + '0');
}
