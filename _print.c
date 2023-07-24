#include "main.h"

/**
 * _printf - acts as printf of libc
 * @format: string that shows what and how to print
 * Return: number of characters the functios printed
 */

int _printf(const char *format, ...)
{
	int  count = 0;
	char *c;
	va_list args;
	int (*f)(va_list);

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (c = (char *)format ; *c ; c++)
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
			if (*(++c) == '\0')
				return (-1);
			f = getSpecifier(c);
			if (f == NULL)
			{
				count += _putchar('%');
				count += _putchar(*c);
				continue;
			}
			count += f(args);
			continue;
		}
		count += _putchar(*c);
	}
	va_end(args);
	return (count);
}
