#include "main.h"

/**
 * swap_int - This function to swap a with b
 * @a: number1.
 * @b: number2.
 * Return: void.
*/

void swap_int(int *a, int *b)
{
	int c; /* the c here is use so we can store the value of *a */

	c = *a;
	*a = *b;
	*b = c;
}
