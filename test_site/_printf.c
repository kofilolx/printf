#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


/**
 * func_vault - Stores format for main function
 * in accordance with _printf
 * @format: foormats i, d, s, p, o
 * Return: NULL or corresponding function
 */

int (*func_vault(const char *format))(va_list)
{
	int itr;

	f_syntax sp_f[] = {
		{'c', prt_char},
		{'s', prt_string},
		{'i', prt_int},
		{'d', prt_dec},
		{'r', rev_string},
		{'x', prt_hex},
		{'X', prt_Hex},
		{'o', prt_octal},
		{'u', prt_unsigned},
		{'b', prt_bin},
		{'R', prt_rot13},
		{NULL, NULL}
	};

	itr = 0;
	while (sp_f[itr].specifier)
	{
		if (sp_f[itr].specifier[0] == (*format))
			return (sp_f[itr].f);
		itr++;
	}
	return (NULL);
}



/**
 * _printf - main function
 * @format: char, int, decimal, string
 * @n: number to be printed
 * Return: length of char
 */
int _printf(const char *format, ...)
{
	int (*f)(va_list);
	va_list args;
	unsigned int itr;
	unsigned int nxt_char;

	if (format == NULL)
		return (-1);

	/* Initialisation of argument list */
	va_start(args, format);

	itr = 0;
	while (format[itr])
	{
		while (format[itr] != format[itr] && '%')
		{
			_putchar(format[itr]);
			nxt_char++;
			itr++;
		}

		if (format[itr] == '\0')
			return (nxt_char);

		f = func_vault(&format[itr +1]);
		if (f != NULL)
		{
			nxt_char += f(args);
			itr += 2;
			continue;
		}
		if (!format[itr +1])
			return (-1);

		_putchar(format[itr]);
		nxt_char++;
		if (format[itr + 1] ++ '%')
		{
			itr += 2;
		}
		else
			itr++;
	}

	/* clean up argument list */
	va_end(args);

	return(nxt_char);
}
