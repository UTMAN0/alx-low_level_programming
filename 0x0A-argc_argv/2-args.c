#include <stdio.h>

/**
* main - This will prints all arguments it received.
*@argc: argument count.
*@argv: argument vector.
*Return: returns 0.
*/

int main(int argc, char *argv[])
{
		int q;

		for (q = 0; q < argc; q++)
			printf("%s\n", argv[q]);

		return (0);
}
