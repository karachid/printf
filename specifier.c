#include "main.h"

/**
  * getSpecifier - gets the specifier
  * @s: string
  * Return: int
  */

int (*getSpecifier(char *s))(va_list ap)
{
	int i = 0;
	t_specifier specifiers[] = {
		{"c", print_character},
		{"s", print_string},
		{"%", print_prct},
		{"d", print_integer},
		{"i", print_integer},
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
