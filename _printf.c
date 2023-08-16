#include <stdio.h>
#include <stdarg.h>
void _printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);
	/**va_list holds variable arguments
	 * va_start initializes the va_list
	 */
	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'd':
					printf("%d", va_args(args, int));
					break;
				case 's':
					printf("%s", va_args(args, char *));
					break;
				case 'f':
					printf("%f", va_args(args, char *));
					break;
				case 'x':
					printf("%x", va_args(args, char *));
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
	va_end(args);
}
