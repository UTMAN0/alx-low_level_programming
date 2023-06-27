#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point generates a random password.
 *
 * Return: the generated password.
 */
int main(void)
{
char h;
int x;

srand(time(0));
while (x <= 2645)
{
h = rand() % 128;
x += h;
putchar(h);
}
putchar(2772 - x);
return (0);
}
