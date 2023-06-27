#include "main.h"

/**
 * rev_string - this prints a string in reverse.
 * @s: the used string to beb reversed.
 * Return: Void.
 * 1st counting the length of the string.
 * swapping characters from opposite ends of the string.
 * until the midpoint is reached. The function modifies the
 * input string directly.
 */

void rev_string(char *s)
{
	int c, i, half; /**
									* c is the  length and half
									*repsent the midpoint of the string
									*/
	char temp;

	for (c = 0; s[c] != '\0'; c++)

	i = 0;
	half = c / 2;

	while (half--)
	{
		temp = s[c - i - 1];
		s[c - i - 1] = s[i];
		s[i] = temp;
		i++;
	}
}
