#include "main.h"

/**
 * print_numbers -  prints the numbers, from 0 to 9
 * followed by a new line.
 *
 * Return: Always 0.
 */

int print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)

	_putchar((num % 10) + '0');

	_putchar('\n');
}
