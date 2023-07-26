#include "main.h"

/**
 * print_integer - prints an integer
 * @ap: list of args
 * Return: number of chars printed
 */

int print_integer(va_list ap)
{
	char *arr = "0123456789";
	int n, count = 0, sign = 0, i = 0;
	char str[30];

	n = va_arg(ap, int);

	if (n < 0)
	{
		sign = 1;
		n *= -1;
	}

	while (n != 0)
	{
		str[i++] = arr[n % 10];
		n /= 10;
	}

	if (i != 0)
	{
		i--;
		if (sign)
		{
			_putchar('-');
			count++;
		}
		while (i >= 0)
		{
			count += _putchar(str[i]);
			i--;
		}
	}
	else
	{
		count += _putchar('0');
	}
	return (count);
}
