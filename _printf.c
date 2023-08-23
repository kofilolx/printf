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
	int nxt_char = 0;
	va_list argList;

	if (format == NULL)
		return (-1);

	/* Initialize va start */
	va_start(argList, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			nxt_char++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;

			if (*format == '%')
			{
				write(1, format, 1);
				nxt_char++;
			}

			else if (*format == 'c')
			{
				char c_arg = va_arg(argList, int);

				write(1, &c_arg, 1);
				nxt_char++;
			}

			else if (*format == 's')
			{
				char *s_arg = va_arg(argList, char *);
				int strLen = 0;

				while s_arg[strLen] != '\0')
					strLen++;

				write(1, &s_arg, strLen);
				nxt_char += strLen;
			}
		}
		format++;
	}

	/* Clean up argument list */
	va_end(argList);
	return (nxt_char);
}
