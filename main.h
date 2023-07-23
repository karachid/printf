#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stddef.h>

/**
 * struct specifier - specifier data structure
 * @spf: specifier string
 * @fun: function pointer that points to the function
 * to be executed
 */

struct specifier
{
	char *spf;
	int (*fun)(va_list);
};

typedef struct specifier t_specifier;


int _putchar(int c);
int _printf(const char *format, ...);
int print_character(va_list ap);
int (*getSpecifier(char *s))(va_list ap);
int print_string(va_list ap);
int print_prct(va_list ap);

#endif
