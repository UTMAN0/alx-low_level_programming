#include <stdio.h>

/**
 * main - This will prints the sum of even-valued Fibonacci sequence.
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long x = 0, o = 1, S;
	float T_S;

	while (1)
	{
		S = x + o;
		if (S > 4000000)
			break;

		if ((S % 2) == 0)
			T_S += S;

		x = o;
		o = S;
	}
	printf("%.0f\n", T_S);

	return (0);
}
