#include "main.h"

/**
 * _printf - acts as printf of libc
 * format: string that shows what and how to print
 * 
 * Return: number of characters the functios printed 
 */

int _printf(const char *format, ...)
{
	int  count = 0;
	char *c;
	va_list args;

	va_start(args, format);

	for (c = (char*)format ; *c ; c++)
	{
		if (*c == '\\')
		{
			if (*(c++) == 'n')
			{
				count += _putchar(*c);
				continue;
			}
		}
		if (*c == '%')
		{
			c++;
			int (*f)(va_list) = getSpecifier(c);
			count += f(args);
			continue;
		}
		count += _putchar(*c);
	}
	va_end(args);
	return count;
}
