#include <stdio.h>
#include <stdlib.h>

/**
*main - This is will adds positive numbers.
*@argc: number of arguments.
*@argv: array of arguments.
*Return: 0 on success, 1 on failure.
*/

int main(int argc, char *argv[])
{
	int q, j, sum = 0;

	for (q = 1; q < argc; q++)
	{
		for (q = 0; argv[q][j] != '\0'; j++)
		{
			if (argv[q][j] < '0' || argv[q][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[q]);
	}

	printf("%d\n", sum);

	return (0);
}
