#include "main.h"

/**
 * format_vault - returns required format
 * @format: data tpyes (int, char, double)
 *
 * Return: f_vault || NULL
 */

int (*format_vault(const char *format))(va_list)
{
	unsigned int i;

	f_syntax f_vault[] = {
		{"c", _printf_char},
		/* {"d", _printf_dec},
		{"i", _printf_int},
		{"s", _printf_string},*/
		{NULL, NULL}
	};

	i = 0;
	while (f_vault[i].specifier != NULL)
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
	/* unsigned int j; */
	va_list argsList;
	/* int (*f)(va_list); */

	if (format == NULL)
		return (-1);

	/* initialization of list */
	va_start(argsList, format);

	/* try to fit mikes line here to look more collaborative */
	while (*format != '\0')
        {
                if (*format == '%')
                {
                        format++;
                        switch (*format)
                        {
                                case 'd':
                                        printf("%d", va_arg(argsList, int));
                                        break;
                                case 's':
                                        printf("%s", va_arg(argsList, char *));
                                        break;
                                case 'f':
                                        printf("%f", va_arg(argsList, char *));
                                        break;
                                case 'x':
                                        printf("%x", va_arg(argsList, char *));
                                        break;
                                default:
                                        putchar('%');
                                        putchar(*format);
                                        break;
                        }
                }
                else
                        putchar(*format);
                format++;
        }
	/* Cleans up argument list */
	va_end(argsList);

	/* should return and int value */
	return (1);
}

