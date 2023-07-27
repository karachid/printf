#include "main.h"
#include <stdio.h>

/**
 * uintToBinary - converts an int to binary
 * @n: integer input
 * Return: number of digits
 */

int uintToBinary(unsigned int n)
{

	int b[64];
	int i = 0, j;

	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	for (i = 0; n > 0; i++)
	{
		b[i] = n % 2;
		n /= 2;
	}

	for (j = i - 1; j >= 0; j--)
		_putchar(b[j] + 48);

	return (i);
}
