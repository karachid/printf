#include "main.h"
#include <stdio.h>

int print_character(va_list ap)
{
	unsigned int c;

	c = va_arg(ap, int);

	_putchar(c);

	return (1);
}
