#include "main.h"
/**
 * _printf_char - display character to the console
 * @c: character string
 *
 * Return: (1)
 */

int _printf_char(va_list c)
{
	unsigned char ptf_char;

	ptf_char = va_arg(c, int);
	_putchar(ptf_char);

	return (1);
}

/**
 * _printf_percent - display % symbol to the console
 *
 * Return: (1)
 */

int _printf_percent(void)
{
	_putchar(41);
	return (1);
}
