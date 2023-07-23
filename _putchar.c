#include "main.h"

/**
 * _putchar - writes a char passed in args to stdout
 * @c: The character to print
 * Return: 1 since one character is printed
 */

int _putchar(int c)
{
	return (write(1, &c, 1));
}
