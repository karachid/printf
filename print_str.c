#include "main.h"

int print_string(va_list ap)
{
	int count = 0, i = 0;
	char* s;

	s = va_arg(ap, char *);

	while(s[i] != '\0')
	{
		count += _putchar(s[i]);
		i++;
	}

	return (count);
}
