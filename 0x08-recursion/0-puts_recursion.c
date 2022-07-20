#include "main.h"

/**
<<<<<<< HEAD
 * _puts_recursion - prints a string, followed by a new line.
 * @s: the string to be printed.
 *
 * Return: nothing
 */
=======
 *  * _puts_recursion - prints a string, followed by a new line.
 *   * @s: the string to be printed.
 *    *
 *     * Return: nothing
 *      */
>>>>>>> 0cbc1442901c81ccbdff40d05a7eb06a521ebcc4
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
<<<<<<< HEAD
		_putchar(10);
		return;
=======
	_putchar(10);
	return;
>>>>>>> 0cbc1442901c81ccbdff40d05a7eb06a521ebcc4
	}
	_putchar(*s);
	_puts_recursion(++s);
}
