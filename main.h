#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

/* Prototype function container */
int _putchar(char n);
int _printf(const char *format, ...);

/**
* struct format - Struct format
* @specifier: Formats char, int, decimal, string
* @f: Function pointer
* */
typedef struct format
{
	char specifier;
	int (*f)(va_list);
} f_syntax;

int prt_rot13(va_list R);
int prt_char(va_list c);
int prt_string(va_list s);
int prt_int(va_list i);
int prt_dec(va_list d);
int prt_rev(va_list r);
int prt_hex(va_list x);
int prt_Hex(va_list X);
int prt_octal(va_list o);
int prt_unsigned(va_list u);
int prt_bin(va_list b);

#endif
