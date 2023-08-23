#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <limits.h>

/**
 * _printf - The functions evokes result in accordance to the _printf
 * @format: format (char, string, int)
 * Return: nxt_char
 */

int _printf(const char *format, ...)
{
	int itr, nxt_char = 0;
	int jmp;
	va_list argList;

	f_syntax sp_f[] = {
		{'c', prt_char},
		{'s', prt_str},
		{'%', prt_mod},
		{'i', prt_int},
		{'d', prt_int},
		{'r', rev_string},
		{'x', prt_hex},
		{'X', prt_Hex},
		{'o', prt_oct},
		{'u', prt_unsigned},
		{'b', prt_bin},
		{'p', prt_add},
		{'S', prt_ex_str},
		{'\0', NULL}
	};

	va_start(argList, format);

	if ((!format) || (format[0] == '%' && !format[1]))
		return (-1);

	while (format[itr])
	{
		if (format[itr] == '%')
		{
			if (format[itr + 1] == '\0')
				return (-1);

			if (format[itr + 1] == '+' || format[itr + 1] == ' ')
			{
				va_list dst;

				va_copy(dst, argList);
				nxt_char += op_space(format[itr + 1], va_arg(dst, int));
				itr++;
			}
			else if (format[itr + 1] == '#')
			{
				nxt_char += _hash(format[itr + 2], &i);
			}
			jmp = 0;
			while (jmp <= 12)
			{
				if (format[itr + 1] == sp_f[jmp].specifier)
				{
					nxt_char += sp_f[jmp].f(argList);
					itr += 2;
					break;
				}
				jmp++;
			}
		}
		else
		{
			_putchar(format[itr]);
			nxt_char++;
			itr++;
		}
	}

	/* cleans up the argument list */

	va_end(argList);
	return (nxt_char);
}
