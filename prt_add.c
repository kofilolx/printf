#include "main.h"

/**
 * prt_add - print address of value
 * @argList:va_list
 * Return:len
 */
int prt_add(va_list argList)
{
	void *ptr;
	char *str = "(nil)";
	int len, i;

	va_list dst;

	va_copy(dst, argList);

	ptr = va_arg(argList, void*);
	if (ptr == NULL)
	{
		i = 0;
		while (*str)
		{
			_putchar(*str);
			str++;
			i++;
		}
		va_end(dst);
		return (i);
	}
	_putchar('0');
	_putchar('x');

	len = prt_hex_ptr(dst);
	va_end(dst);

	return (len + 2);

}
