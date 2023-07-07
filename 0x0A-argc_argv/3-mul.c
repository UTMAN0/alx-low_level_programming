#include <stdio.h>
#include <stdlib.h>
/**
* main - This will prints multiplication.
*of two numbers.
*@argc: number of arguments.
*@argv: array of arguments.
*Return: returns 0.
*/

int main(int argc, char *argv[])
{
	int q, j, mul;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}

	q = atoi(argv[1]);
	j = atoi(argv[2]);
	mul = q * j;

	printf("%d\n", mul);
	return (0);
}
