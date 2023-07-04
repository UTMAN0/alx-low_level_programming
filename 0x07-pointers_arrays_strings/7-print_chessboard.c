#include "main.h"

/**
*print_chessboard - This is a function that prints the chessboard.
*@a: array containing board elements
*returns nothing
*/

void print_chessboard(char (*a)[8])
{
	int q, u;

	for (q = 0; a[q][7]; q++)
	/*Loop through row */
	{
		for (u = 0; u < 8; u++)
	/*Loop through each column in the current row */
			_putchar(a[q][u]);
		_putchar('\n');
	}

}
