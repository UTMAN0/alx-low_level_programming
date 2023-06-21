#include <stdio.h>

/**
 * main - This Lists all the natural numbers below 1024.
 *        that are multiples of 3 or 5.
 *
 * Return: Always 0
 */
int main(void)
{
	int x, y = 0;

	for (x = 0; x < 1024; x++)
	{
		if ((x % 3) == 0 || (x % 5) == 0)
			y += x; /** += means variable += value; so we want to increment y by
								* x
								*/
	}

	printf("%d\n", y);

	return (0);
}
