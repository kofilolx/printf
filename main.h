#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

/* Prototype function container */
int _putchar(char n);
int _printf(const char *format, ...);
int _hash(char c, int *i);

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

void prt_Hexadecimal(unsigned int num, int *p);
int prt_ex_str(va_list argList);
int prt_hex_ptr(va_list argList);
int prt_add(va_list argList);
int prt_bin(va_list argList);
int prt_unsigned(va_list argList);
int prt_octal(va_list argList);
int prt_hex(va_list argList);
int prt_Hex(va_list argList);
int rev_string(va_list argList);
int len_int(int argList);
int prt_char(va_list argList);
int prt_int(va_list argList);
int prt_mod(va_list argList);
int prt_string(va_list argList);

#endif
