#include "main.h"

/**
*print_diagsums -  a function that prints the sum of
* the two diagonals of a square matrix of integers.
*@a:matrix to be summed
*@size:size of the matrix
*/

void print_diagsums(int *a, int size)
{
	int q;
	int sum1 = 0;
	int sum2 = 0;

	for (q = 0; q < size; q++)
	{
		sum1 += a[q];
		/*we move the pointer to the next element in the diagonal*/
		a = a + size;
	}

	/* we move the pointer back to the start of the diagonal*/
	a = a - size;

	for (q = 0; q < size; q++)
	{
		sum2 += a[q];
		/* move the pointer to the next element in the diagonal*/
		a = a - size;
	}

	printf("%d, %d\n", sum1, sum2);
}
