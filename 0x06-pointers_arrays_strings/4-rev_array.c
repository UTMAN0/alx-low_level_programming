#include "main.h"

/**
 * reverse_array - Tis is a function that reverses the
 *                content of an array of integers.
 *
 * @a: A pointer to int array.
 * @n: This is the number of elements to swap.
 *
 * Return: nothing.
*/

void reverse_array(int *a, int n)
{
	int temp, q, e;

	q = 0;
	e = n - 1;
	/**
	 * set value in array a in temp
	 * then place the last array in
	 * the first array then place
	 * value in temp to last array
	*/
	while (s < e)
	{
		temp = a[q];
		a[q] = a[e];
		a[e] = temp;
		q++;
		e--;
	}
}
