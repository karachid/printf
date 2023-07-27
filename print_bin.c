#include "main.h"


/**
 * print_binary - prints an int in binary format
 * @ap: list of args
 * Return: int which describes the number of char printed
 */

int print_binary(va_list ap)
{
	unsigned int n, i;

	n = va_arg(ap, unsigned int);

	i = uintToBinary(n);

	return (i);
}
