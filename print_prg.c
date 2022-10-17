#include "main.h"
#include <stdio.h>

/**
 * print_prg - writes the character c to stdout.
 * @a: input char.
 * @buf: buffer pointer.
 * @i: index for buffer pointer.
 * Return: 1 On success
 */
int print_prg(va_list a __attribute__((unused)), char *buf, unsigned int i)
{
	handl_buf(buf, '%', i);

	return (1);
}
