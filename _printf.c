#include "main.h"
#include <stdio.h>

/**
 * format_vault - returns required format
 * @format: data tpyes (int, char, double)
 *
 * Return: f_vault || NULL
 */

int (*format_vault(const char *format))(va_list)
{
	unsigned int i;

	f_syntax f_valut[] = {
		{"c", _printf_char},
		{"%", _printf_per},
		{"i", _printf_int},
		{"s", _printf_string}
		{NULL, NULL}
	};

	i = 0;
	while (f_valut[i].specifier)
	{
		if (f_vault[i].specifier[i] == (*format))
		{
			return (f_vault[i].f);
		}
		i++;
	}
	return (NULL);


}


/**
 * _printf - Function that generates output in
 * accordance with specified format.
 * @format: datatypes (int, char, double)
 *
 * Return: Output to standard console
 */

int _printf(const char *format, ...)
{
	unsigned int j;
	va_list argsList;
	int (*f)(va_list);

	if (format == NULL || format == '\0')
		return (-1);

	/* initialization of list */
	va_start(argsList, format);

	/* try to fit mikes line here to look more collaborative */


	/* Cleans up argument list */
	va_end(argsList);

	/* should return and int value */
	return (int);
}

