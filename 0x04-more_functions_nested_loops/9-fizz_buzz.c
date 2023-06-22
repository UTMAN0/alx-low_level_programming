#include "main.h"
#include <stdio.h>

/**
 * main - This is an entry point.
 *
 * Description: Prints the numbers 1 - 100 w/.
 * Fizz for multiples of 3, Buzz for multiples of 5,
 * And FizzBuzz for multiples of both.
 *
 * Return: always 0.
 */

int main(void)
{
	int o;

	for (o = 1; o <= 100; o++)
	{
		if (o % 15 == 0)					/* This is The multiple of both is 15 = 3*5 */
			printf("FizzBuzz");
		else if (o % 3 == 0)
			printf("Fizz");
		else if (o % 5 == 0)
			printf("Buzz");
		else
			printf("%d", o);
		if (o < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
