#include "main.h"
#include <stdio.h>
/**
 * _printf - custom printf function
 * prints different format specifiers
 * @format: contains the format specifiers
 * Return: returns an output to the stdout
 */
int _printf(const char *format, ...)
{
	va_list specifiers;
	int characters;
	/* variable declarations done*/
	characters = 0;
	if (format == NULL)
		return (-1);
	/*returns an error*/
	va_start(specifiers, format);
	while (*format != '\0')
	{
		if (*format != '%')
		{
			write(1, format, 1);
			characters++;

			/*writes the strings as characters to the output */
		}
		else
		{
			/**if format begins with % handle the specifier check nxt character */
			format++;
			switch (*format)
			{
				case 'c':
					{
						char c = va_arg(specifiers, int);

						write(1, &c, 1);
						characters++;
						break;
					}
				case 's':
					{
						char *s = va_arg(specifiers, char *);

						write(1, s, strlen(s));
						characters += strlen(s);
						break;
					}
				case '%':
					{
						write(1, "%", 1);
						characters++;
						break;
					}
				case 'd':
					{
						int d = va_arg(specifiers, int);
						char buffer[BUFF_SIZE];
						int len = snprintf(buffer, sizeof(buffer), "%d", d);

						write(1, buffer, len);
						characters += len;
						break;
					}
				case 'i':
					{
						int i = va_arg(specifiers, int);
						char buffer_i[BUFF_SIZE];
						int len_i = snprintf(buffer_i, sizeof(buffer_i), "%i", i);

						characters += len_i;
						break;
					}
				case 'u':
					{
						unsigned int u = va_arg(specifiers, unsigned int);
						char buffer_u[BUFF_SIZE];
						int len_u = snprintf(buffer_u, sizeof(buffer_u), "%u", u);

						write(1, buffer_u, len_u);
						characters += len_u;
						break;
					}
				case 'p':
					{
						void *p = va_arg(specifiers, void *);
						char  buffer_p[BUFF_SIZE];
						int len_p = snprintf(buffer_p, sizeof(buffer_p), "%p", p);

						write(1, buffer_p, len_p);
						characters += len_p;
						break;
					}
				case 'x':
					{
						unsigned int x = va_arg(specifiers, unsigned int);
						char buffer_x[BUFF_SIZE];
						int len_x = snprintf(buffer_x, sizeof(buffer_x), "%x", x);

						write(1, buffer_x, len_x);
						characters += len_x;
						break;
					}
				case 'o':
					{
						unsigned int o = va_arg(specifiers, unsigned int);
						char buffer_o[BUFF_SIZE];
						int len_o = snprintf(buffer_o, sizeof(buffer_o), "%o", o);

						write(1, buffer_o, len_o);
						characters += len_o;
						break;
					}
				default:
					break;
			}
		}
		format++;
	}
	va_end(specifiers);
	return (characters);
}
