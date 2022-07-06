#include "main.h"

/**
 * print_alphabet_x10 - prints 10 rimes the alphabet,
 * in lowercase
 */

void print_alphabet_x10(void)
{
	int xisabiye = 0;
	char xarfo;

	while (xisabiye++ <= 9)
	{

	for (xarfo = 'a'; xarfo <= 'z'; xarfo++)

	_putchar(xarfo);
	_putchar('\n');
	}
}
