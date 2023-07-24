#include "main.h"


/**
 * print_string - prints a string
 * @ap: list of args
 * Return: int which describes the number of char printed
 */

int print_string(va_list ap)
{
	int count = 0, i = 0;
	char *s;

	s = va_arg(ap, char *);

	if (s == NULL)
		s = "(null)";

	while (s[i] != '\0')
	{
		count += _putchar(s[i]);
		i++;
	}

	return (count);
}
