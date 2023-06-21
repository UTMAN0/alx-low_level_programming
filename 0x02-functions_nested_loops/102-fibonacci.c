#include <stdio.h>

/**
 * main - This Prints first 50 Fibonacci numbers, starting with 1 and 2,
 *        separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;
	unsigned long x = 0, j = 1, S;

	for (a = 0; a < 50; a++)
	{
		S = x + j;
		printf("%lu", S);

		x = j;
		j = S;

		if (a == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
