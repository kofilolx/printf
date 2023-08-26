#include "main.h"

/**
 * _printf - print f function
 * @format: character string will be printed
 * Return: number of digits printed
 */
int _printf(const char *format, ...)
{
	int j, itr, nxt_char = 0;
	va_list argList;

	f_syntax sp_f[] = {
		{'c', prt_char},
		{'s', prt_string},
		{'%', prt_mod},
		{'i', prt_int},
		{'b', prt_bin},
		{'r', rev_string},
		{'X', prt_Hex},
		{'x', prt_hex},
		{'o', prt_octal},
		{'u', prt_unsigned},
		{'d', prt_dec},
		{'p', prt_add},
		{'S', prt_ex_str},
		{NULL, NULL}
	};
	/* initialization of arg list */
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
				nxt_char += _hash(format[itr + 2], &itr);
			}

			j = 0;
			while (j < 13)
			{
				if (format[itr + 1] == sp_f[j].specifier)
				{
					nxt_char += sp_f[j].f(argList);
					itr += 2;
					break;
				}
				j++;
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
