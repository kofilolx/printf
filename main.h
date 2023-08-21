#ifndef MAIN_H
#define MAIN_H
#include <string.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int _putchar(char c);
int _printf(const char *format, ...);

/* function prototype of list of specifier */
int _printf_char(va_list c);
int _printf_string(va_list s);

/**
 * struct function_syntax - list of datatypes and specifiers
 * @specifier: "%d", "%s", "%i"
 * @f: function pointer point va_list
 *
 * Return: nothing
 */

typedef struct _f_syntax
{
	char *specifier;
	int (*f)(va_list);

} f_syntax;



#endif