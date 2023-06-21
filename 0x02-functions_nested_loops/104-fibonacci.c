#include <stdio.h>

/**
 * main - This will prints the first 98 Fibonacci numbers, starting with.
 *        1 and 2, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
	int count;
	unsigned long fibn_1 = 0, fibn_2 = 1, sum;
	unsigned long fibn_1_half1, fibn_1_half2, fibn_2_half1, fibn_2_half2;
	unsigned long half1, half2;

	for (count = 0; count < 92; count++)
	{
		sum = fibn_1 + fibn_2;
		printf("%lu, ", sum);

		fibn_1 = fibn_2;
		fibn_2 = sum;
	}

	fibn_1_half1 = fibn_1 / 10000000000;
	fibn_2_half1 = fibn_2 / 10000000000;
	fibn_1_half2 = fibn_1 % 10000000000;
	fibn_2_half2 = fibn_2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		half1 = fibn_1_half1 + fibn_2_half1;
		half2 = fibn_1_half2 + fibn_2_half2;
		if (fibn_1_half2 + fibn_2_half2 > 9999999999)
		{
			half1 += 1;
			half2 %= 10000000000;
		}

		printf("%lu%lu", half1, half2);
		if (count != 98)
			printf(", ");

		fibn_1_half1 = fibn_2_half1;
		fibn_1_half2 = fibn_2_half2;
		fibn_2_half1 = half1;
		fibn_2_half2 = half2;
	}
	printf("\n");
	return (0);
}
