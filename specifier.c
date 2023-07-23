#include "main.h"
#include <stdio.h>

int (*getSpecifier(char* s))(va_list ap)
{
	int i = 0;
	t_specifier specifiers[] = {
		{"c", print_character},
		{NULL, NULL}
	};

	while (specifiers[i].spf)
	{
		if (specifiers[i].spf[0] == *s)
		{
			return (specifiers[i].fun);
		}
		i++;
	}
	return (NULL);
}
