#include <stdio.h>

/**
* main - This is prints the number of arguments.
*@argc: number of arguments.
*@argv: array of arguments.
*Return: The number of arguments.
*/

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
