#include "main.h"

/**
 * _strcat -  appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 * @dest: the destination.
 * @src: the source to be concatenated to dest
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int lenth = 0;
	char *cpy;

	for (; dest[lenth] != '\0'; lenth++)
	;

	cpy = dest + lenth;
	while (*src != '\0')
		*cpy++ = *src++;
	*cpy = '\0';

	return (dest);
}

