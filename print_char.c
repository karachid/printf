#include "main.h"

/**
 * print_character - prints a string
 * @ap: list of args
 * Return: int (1 since it prints only one char)
 */

int print_character(va_list ap)
{
	unsigned int c;

	c = va_arg(ap, int);

	_putchar(c);

	return (1);
}
