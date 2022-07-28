#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string to be manipulated
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int i = 0, j;
	char kmg;

	for (; s[i] != '\0'; i++)
	;
	for (j = 0; j < (i / 2); j++)
	{
	kmg = s[j];
	s[j] = s[i - j - 1];
	s[i - j - 1] = kmg;
	}
}
