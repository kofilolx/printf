#include "main.h"

/**
 * prt_char - writes to the std as char
 * @c: char to be printed
 * Return: char
 */
int prt_char(va_list c)
{
	_putchar(va_arg(argList, int));
	return (1);
}

/**
 * prt_percentage - percent symbol %
 *
 * Return: 1 success
 */
int prt_percentage(void)
{
	_putchar('%');
	return (1);
}
