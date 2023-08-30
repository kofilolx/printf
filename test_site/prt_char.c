#include "main.h"

/**
 * prt_char - print input as char
 * @argList: pointer
 * Return: char
 */
int prt_char(va_list argList)
{
	_putchar(va_arg(argList, int));
	return (1);
}
