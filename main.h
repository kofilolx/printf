#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

/* Prototype function container */
int _putchar(int n);
int _printf(const char *format, ...);
int op_space(int c, int n);
int _hash(char c, int *i);

/**
* struct prog_structure - Struct format
* @specifier: Formats char, int, decimal, string
* @f: Function pointer
* */
typedef struct prog_structure
{
	char *specifier;
	int (*f)(va_list);
} f_syntax;

void prt_Hexadecimal(unsigned int num, int *p);
int prt_ex_str(va_list argList);
int prt_hex_ptr(va_list argList);
int prt_address(va_list argList);
int prt_binary(va_list argList);
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
