#include "main.h"
/**
 * print_alphabet_x10 - Is a function to print the alphabet x10
 * Return: void
*/

void print_alphabet_x10(void)
{
		char one;
		int two;

		two = 0;
		while (two < 10)
		{
			for (one = 'a'; one <= 'z'; one++)
			{
			_putchar(one);
			}
			_putchar('\n');
			two++;
		}
}
